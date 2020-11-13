/*bai2 */

//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//
//int a[1000001];
//void sieve(){
//	for(int i=1;i<=1000000;i++){
//		a[i]=i;
//	}
//	for(int i=2;i<=1000;i++){
//		if(a[i]==i){
//			for(int j=i*i;j<=1000000;j+=i){
//				if(a[j]==j){
//					a[j]=i;
//				}
//			}
//		}
//	}
//}
//int main(){
//	sieve();
//	int T;
//	scanf("%d",&T);
//	while(T--){
//		int n;
//		scanf("%d",&n);
//		for(int i=1;i<=n;i++){
//			printf("%d ",a[i]);
//		}
//		printf("\n");
//	}
//}

//*****************

#include<stdio.h>
#include<math.h>
#include<string.h>
int a[1000000];
void sieve(){
	for(int i=1;i<=1000000;i++){
		a[i]=i;
	}
	for(int i=2;i<=1000;i++){
		if(a[i]==i){
			for(int j=i*i;j<=1000000;j+=i){
				if(a[j]==j){
					a[j]=i;
				}
				else break;
			}
		}
	}
}
int main(){
	sieve();
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
}
//*****************
//#include<stdio.h>
//int test(int n){
//	for(int i=2;i<=n;i++){
//		if(n%i==0) return i;
//	}
//}
//void solve(int n){
//	for(int i=1;i<=n;i++){
//		if(i==1) printf("1 ");
//		else{
//		printf("%d ",test(i));
//		}
//	}
//	printf("\n");
//}
//int main(){
//	int t;
//	scanf("%d", &t);
//	for(int i=1;i<=t;i++){
//		printf("Test %d:\n",i);
//		int n;
//		scanf("%d", &n);
//		solve(n);
//	}
//}


