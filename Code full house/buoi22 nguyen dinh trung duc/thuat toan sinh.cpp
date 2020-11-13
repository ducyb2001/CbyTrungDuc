/* thuat toan sinh buoi 22*/

//#include<stdio.h>
//#include<string.h>
//
//void next(char c[]){
//	int i=strlen(c)-1;
//	while(i>=0 && c[i]=='1'){
//		c[i]='0';
//		i--;
//	}
//	if(i>=0)
//		c[i]='1';
//	printf("%s\n",c);
//}
//int main(){
//	int T;
//	scanf("%d",&T);
//	while(T--){
//		char c[1000];
//		scanf("%s",c);
//		next(c);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int n,a[100],ok;
//// cau hinh ban dau, n so 0
//void init(){
//	for(int i=1;i<=n;i++){
//		a[i]=0;
//	}
//}
//
//// ham sinh xau ke tiep
//
//void next(){
//	int i=n;
//	while(i>=1 && a[i]==1){
//		a[i]=0;
//		i--;
//	}
//	if(i==0){
//		ok=0; // cau hinh cuoi cung
//	}
//	else{
//		a[i]=1;
//	}
//}
//
//void in(){
//	for(int i=1;i<=n;i++){
//		printf("%d",a[i]);
//	}
//	printf(" ");
//}
//
//int main(){
//	int T;
//	scanf("%d",&T);
//	while(T--){
//		scanf("%d",&n);
//		init();
//		ok=1;
//		while(ok){
//			in();
//			next();
//		}
//		printf("\n");
//	}
//}

#include<stdio.h>
#include<string.h>

int n,k,a[100];
void init(){
	for(int i=1;i<=k;i++){
		scanf("%d",&a[i]);
	}
}

void sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		i--;
	}
	if(i==0){
		for(int i=1;i<=k;i++){
			printf("%d ",i);
		}
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
		for(int i=1;i<=k;i++){
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&n,&k);
		init();
		sinh();
	}
}
