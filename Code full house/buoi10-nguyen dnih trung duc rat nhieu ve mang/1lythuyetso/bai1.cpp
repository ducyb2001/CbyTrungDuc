/* bai 1*/
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//
//int prime[1001];
//void sieve(){
//	memset(prime,1,sizeof(prime));
////	for(int i=1;i<1001;i++){
////		prime[i]=1;
////	}
//	prime[0]=0;
//	prime[1]=0;
//	for(int i=2;i<=sqrt(1000);i++){
//		if(prime[i]){
//			for(int j=i*i;j<=1000;j+=i){
//				prime[j]=0;
//			}
//		}
//	}
//}
//int main(){
//	sieve();
//	int T;
//	scanf("%d",&T);
//	int x;
//	while(T--){
//		int n;
//		scanf("%d",&n);
//		for(int i=0;i<=1000;i++){
//			if(prime[i]){
//				if(i*i<=n){
//					printf("%d ",i*i);
//				}
//				else break;
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include<stdio.h>
#include<math.h>
#include<string.h>

int prime[1001];
void sieve(){
	memset(prime,1,sizeof(prime));
	prime[0]=0;
	prime[1]=0;
	for(int i=2;i<=sqrt(1000);i++){
		if(prime[i]){
			for(int j=i*i;j<=1000;j+=i){
				prime[j]=0;
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
		for(int i=0;i<=1000;i++){
			if(prime[i]){
				if(i*i<=n){
					printf("%d ",i*i);
				}
				else break;
			}
		}
		printf("\n");
	}
}


//#include<stdio.h>
//int check(int n){
//	int cnt=0;
//	for(int i=1;i<=n;i++){
//		if(n%i==0) cnt++;
//	}
//	if(cnt==3) return 1;
//	return 0;
//}
//
//void solve(int n){
//	for(int i=1;i<=n;i++){
//		if(check(i)) printf("%d ",i);
//	}
//	printf("\n");
//}
//int main(){
//	int t;
//	scanf("%d",&t);
//	for(int i=1;i<=t;i++){
//		printf("Test %d:\n", i);
//		int n;
//		scanf("%d", &n);
//		solve(n);
//	}
//}
