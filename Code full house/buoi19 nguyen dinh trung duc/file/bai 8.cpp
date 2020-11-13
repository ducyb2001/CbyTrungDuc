/*bai 8*/

#include<stdio.h>

typedef struct{
	int ma;
	char ten[100];
	float nhap,xuat;
}sanpham;

int size=sizeof(sanpham);

int dem(){
	FILE *f=fopen("bai8.bin","rb");
	fseek(f,0,SEEK_END);
	int ans=ftell(f)/size;
	fclose(f);
	return ans;
}


void them(int n){
	int cnt=dem();
	FILE *f=fopen("bai8.bin", "ab");
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
	FILE *f=fopen("bai8.bin", "rb+");
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
	FILE *f=fopen("bai8.bin", "rb");
	int cnt=dem();
	sanpham a[cnt];
	for(int i=0;i<cnt;i++){
		fread(&a[i], size, 1, f);
	}
	for(int i=0;i<cnt-1;i++){
		for(int j=i+1;j<cnt;j++){
			if(a[j].xuat - a[j].nhap > a[i].xuat - a[i].nhap){
				sanpham tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
	for(int i=0;i<cnt;i++){
		printf("%d %s %.2f %.2f\n", a[i].ma, a[i].ten, a[i].nhap, a[i].xuat);
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
