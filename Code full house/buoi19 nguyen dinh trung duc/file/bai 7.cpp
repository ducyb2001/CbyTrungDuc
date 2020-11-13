/*bai 7 */

#include<stdio.h>
#include<string.h>
typedef struct{
	int ma; 
	char ten[100];
	char masv[100];
}sv;

int size=sizeof(sv);

int dem(){
	FILE *f=fopen("bai7.bin","rb");
	fseek(f,0,SEEK_END);
	int ans=ftell(f)/size;
	fclose(f);
	return ans;
}

void them(int n){
	FILE *f=fopen("bai7.bin","ab");
	int cnt=dem();
	sv tmp;
	for(int i=1;i<=n;i++){
		tmp.ma=cnt+i;
		scanf("%s",tmp.masv);
		while(getchar()!='\n');
		gets(tmp.ten);
		fseek(f,0,SEEK_END);
		fwrite(&tmp, size, 1,f);
	}
	printf("%d\n",n);
	fclose(f);
}

void sua(char c[]){
	FILE *f=fopen("bai7.bin","rb+");
	int x, n=dem();
	sv tmp;
	for(int i=1;i<=n;i++){
		fread(&tmp, size, 1, f);
		if(strcmp(tmp.masv,c)==0){
			x=tmp.ma;
			break;
		}
	}
	scanf("%s", tmp.masv);
	while(getchar()!='\n');
	gets(tmp.ten);
	fseek(f,(x-1)*size,SEEK_SET);
	fwrite(&tmp, size, 1,f);
	printf("%s\n",tmp.masv);
	fclose(f);
}

void hienthi(char c[]){
	FILE *f=fopen("bai7.bin","rb");
	sv tmp;
	while(fread(&tmp, size, 1, f)!=0){
		if(strstr(tmp.masv , c) != NULL){
			printf("%d %s %s\n", tmp.ma, tmp.masv, tmp.ten);
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
	else if(lc==2){
		char c[100];
		scanf("%s",c);
		sua(c);
	}
	else{
		char c[100];
		scanf("%s",c);
		hienthi(c);
	}
	return 0;
}
