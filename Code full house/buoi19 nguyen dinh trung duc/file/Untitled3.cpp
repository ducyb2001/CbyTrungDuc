/*bai 3 */

#include<stdio.h>

typedef struct{
	int ma; 
	char ten[100];
	float gia;
	int bh;
}thietbi;

int size=sizeof(thietbi);

int dem(){
	FILE *f=fopen("bai3.bin","rb");
	fseek(f,0,SEEK_END);
	int ans=ftell(f)/size;
	fclose(f);
	return ans;
}

void them(int n){
	FILE *f=fopen("bai3.bin","ab");
	int cnt=dem();
	for(int i=1;i<=n;i++){
		thietbi tmp;
		tmp.ma = cnt+i;
		while(getchar() != '\n');
		gets(tmp.ten);
		scanf("%f%d", &tmp.gia, &tmp.bh);
		fseek(f,0,SEEK_END);
		fwrite(&tmp, size, 1, f);
	}
	printf("%d\n", n);
}

void sua(int n){
	FILE *f=fopen("bai3.bin","rb+");
	thietbi tmp;
	tmp.ma=n;
	while(getchar() != '\n');
	gets(tmp.ten);
	scanf("%f%d", &tmp.gia, &tmp.bh);
	fseek(f,(n-1)*size, SEEK_SET);
	fwrite(&tmp, size, 1, f);
	printf("%d\n", n);
	fclose(f);
}

void hienthi(){
	FILE *f=fopen("bai3.bin","rb");
	int cnt = dem();
	thietbi a[cnt];
	for(int i=0;i<cnt;i++){
		fread(&a[i],size,1,f);
	}
	for(int i=0;i<cnt-1;i++){
		for(int j=i+1;j<cnt;j++){
			if(a[j].gia > a[i].gia){
				thietbi tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
	for(int i=0;i<cnt;i++){
		printf("%d %s %.2f %d\n", a[i].ma, a[i].ten, a[i].gia, a[i].bh);
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
	else if(lc==2){
		int n;
		scanf("%d",&n);
		sua(n);
	}
	else hienthi();
	return 0;
}
