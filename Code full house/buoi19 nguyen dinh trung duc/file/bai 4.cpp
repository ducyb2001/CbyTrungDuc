/*bai 4 va bai 5 giong nhau */

#include<stdio.h>

typedef struct{
	int ma;
	char ten[100];
	float monA,monB,monC;
}sv;

const int size=sizeof(sv);
int dem(){
	FILE *f=fopen("bai4.bin","rb");
	fseek(f,0,SEEK_END);
	int ans = ftell(f)/size;
	fclose(f);
	return ans;
} 
void them(int n){
	FILE *f=fopen("bai4.bin","ab");
	int cnt=dem();
	for(int i=1;i<=n;i++){
		sv tmp;
		tmp.ma=cnt+i;
		while(getchar()!='\n');
		gets(tmp.ten);
		scanf("%f%f%f",&tmp.monA,&tmp.monB,&tmp.monC);
		fseek(f,0,SEEK_END);
		fwrite(&tmp,size,1,f);
	}
	printf("%d\n",n);
	fclose(f);
}

void sua(int n){
	FILE *f=fopen("bai4.bin","rb+");
	sv tmp;
	tmp.ma=n;
	while(getchar()!='\n');
	gets(tmp.ten);
	scanf("%f%f%f",&tmp.monA,&tmp.monB,&tmp.monC);
	fseek(f,(n-1)*size,SEEK_SET);
	fwrite(&tmp, size, 1, f);
	printf("%d\n",n);
	fclose(f);
}

void hienthi(){
	FILE *f=fopen("bai4.bin", "rb");
	int cnt=dem();
	sv a[cnt];
	for(int i=0;i<cnt;i++){
		fread(&a[i],size,1,f);
	}
	for(int i=0;i<cnt-1;i++){
		for(int j=i+1;j<cnt;j++){
			if((a[j].monA+a[j].monB+a[j].monC) < (a[i].monA+a[i].monB+a[i].monC)){
				sv tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
	for(int i=0;i<cnt;i++){
		printf("%d %s %.1f %.1f %.1f\n", a[i].ma, a[i].ten, a[i].monA, a[i].monB, a[i].monC);
	}
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

