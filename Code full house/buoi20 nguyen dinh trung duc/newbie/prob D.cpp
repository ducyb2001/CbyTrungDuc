/*problem D */

#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	long long prod=1;
	int mod=1e9+7;
	for(int i=0;i<n;i++){
		prod=((prod%mod)*(a[i]%mod))%mod;
	}
	printf("%lld",prod);
}
