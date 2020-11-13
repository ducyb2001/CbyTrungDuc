/*bai 2*/

#include<stdio.h>

typedef struct{
	int ma; //4byte
	char ten[100]; //100byte
	float nhap,xuat; // 8byte
}sanpham;

int size=sizeof(sanpham);

int dem(){
	FILE *f=fopen("bai2.bin", "rb");
	fseek(f,0,SEEK_END);
	int ans = ftell(f)/size;
	fclose(f);
	return ans;
}

void them(int n){
	int cnt=dem();
	FILE *f=fopen("bai2.bin", "ab");
	for(int i=1;i<=n;i++){
		sanpham tmp;
		tmp.ma = cnt+i;
		while(getchar()!='\n');
		gets(tmp.ten);
		scanf("%f%f",&tmp.nhap, &tmp.xuat);
		fseek(f,0,SEEK_END);
		fwrite(&tmp, size, 1, f);
	}
	printf("%d\n", n);
	fclose(f);
}

void sua(int n){
	FILE *f=fopen("bai2.bin", "rb+");
	sanpham tmp;
	tmp.ma=n;
	while(getchar()!='\n');
	gets(tmp.ten);
	scanf("%f%f",&tmp.nhap, &tmp.xuat);
	fseek(f, (n-1)*size, SEEK_SET);
	fwrite(&tmp, size, 1, f);
	printf("%d\n", tmp.ma);
	fclose(f);
}

void hienthi(){
	FILE *f=fopen("bai2.bin", "rb");
	int n=dem();
	sanpham tmp;
	for(int i=1;i<=n;i++){
		fread(&tmp,size,1,f);
		if(tmp.xuat-tmp.nhap>tmp.nhap){
			printf("%d %s %.2f %.2f\n",tmp.ma,tmp.ten,tmp.nhap,tmp.xuat);
		}
	}
	fclose(f);
}

int main(){
	int lc;
	scanf("%d",&lc);
	if(lc==1){
		int n;
		scanf("%d",&n);
		them(n);
	}
	else if (lc==2){
		int n;
		scanf("%d",&n);
		sua(n);
	}
	else{
		hienthi();
	}
	return 0;
}
