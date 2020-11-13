/*bai 8 230B*/
#include<stdio.h>
#include<math.h>

int prime[1000001];
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
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		long long x;
		scanf("%lld",&x);
		int can=sqrt(x);
		if(1LL*can*can==x){
			if(prime[can]){
				printf("YES\n");
			}
			else printf("NO\n");
		}
		else printf("NO\n");
	}
}

