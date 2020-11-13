/* bai 3 dem cac so co dung 3 uoc so */

#include<stdio.h>
#include<math.h>
#include<string.h>
int prime[1000000];
void sieve(){
	for(int i=1;i<=1000000;i++){
		prime[i]=1;
	}
	prime[0]=0;
	prime[1]=0;
	for(int i=2;i<=sqrt(1000000);i++){
		if(prime[i]){
			for(int j=i*i;j<=1000000;j+=i){
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
		int cnt=0;
		for(int i=2;i<=sqrt(n);i++){
			if(prime[i]){
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
}
//#include<stdio.h>
//#include<math.h>
//int prime[1000001];
//
//void sieve(){
//	for(int i=1;i<=1000000;i++){
//		prime[i]=1;
//	}
//	prime[0]=0;
//	prime[1]=0;
//	for(int i=2;i<=sqrt(1000000);i++){
//		if(prime[i]){
//			for(int j=i*i;j<=1000000;j+=i){
//				prime[j]=0;
//			}
//		}
//	}
//}
//int main(){
//	sieve();
//	int t;
//	scanf("%d",&t);
//	for(int i=1;i<=t;i++){
//		printf("Test %d:\n", i);
//		int n;
//		scanf("%d", &n);
//		int cnt=0;
//		for(int j=2;j<=sqrt(n);j++){
//			if(prime[j]){
//				cnt++;
//			}
//		}
//		printf("%d\n", cnt);
//	}
//}
