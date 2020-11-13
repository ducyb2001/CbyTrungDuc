/*bai 6 */

#include<stdio.h>

typedef struct{
	int ma; 
	char ten[100];
	char tg[100];
	float tien;
}sach;

int size=sizeof(sach);

int dem(){
	FILE *f=fopen("bai6.bin","rb");
	fseek(f,0,SEEK_END);
	int ans=ftell(f)/size;
	fclose(f);
	return ans;
}

void them(int n){
	FILE *f=fopen("bai6.bin","ab");
	int cnt=dem();
	for(int i=1;i<=n;i++){
		sach tmp;
		tmp.ma=cnt+i;
		while(getchar()!='\n');
		gets(tmp.ten);
		gets(tmp.tg);
		scanf("%f",&tmp.tien);
		fseek(f,0,SEEK_END);
		fwrite(&tmp, size, 1,f);
	}
	printf("%d\n",n);
	fclose(f);
}

void sua(int n){
	FILE *f=fopen("bai6.bin","rb+");
	sach tmp;
	tmp.ma=n;
	while(getchar() != '\n');
	gets(tmp.ten);
	gets(tmp.tg);
	scanf("%f", &tmp.tien);
	fseek(f,(n-1)*size, SEEK_SET);
	fwrite(&tmp, size, 1, f);
	printf("%s\n", tmp.ten);
	fclose(f);
}

void hienthi(){
	FILE *f=fopen("bai6.bin","rb");
	int cnt = dem();
	sach a[cnt];
	for(int i=0;i<cnt;i++){
		fread(&a[i],size,1,f);
	}
	for(int i=0;i<cnt-1;i++){
		for(int j=i+1;j<cnt;j++){
			if(a[j].tien < a[i].tien){
				sach tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
	for(int i=0;i<cnt;i++){
		printf("%d %s %.2f %s\n", a[i].ma, a[i].ten, a[i].tien, a[i].tg);
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


