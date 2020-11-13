/*bai 7*/

//#include<stdio.h>
//#include<math.h>
//int prime[1000001];
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
//	scanf("%d", &t);
//	for(int i=1;i<=t;i++){
//		printf("Test %d:\n", i);
//		int n;
//		scanf("%d", &n);
//		if(prime[n]){
//			printf("%d\n", n);
//			break;
//		}
//		else{
//			for(int j=sqrt(n);j>=2;j--){
//				if(prime[j]&&n%j==0){
//					printf("%d\n", j);
//					break;
//				}
//			}
//		}
//	}
//}

#include<stdio.h>
#include<math.h>

long long max(long long n){
	int res=0;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			n/=i;
			res=i;
		}
	}
	if(n>1){
		res=n;
	}
	return res;
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		long long n;
		scanf("%lld",&n);
		printf("%lld\n",max(n));
	}
}
