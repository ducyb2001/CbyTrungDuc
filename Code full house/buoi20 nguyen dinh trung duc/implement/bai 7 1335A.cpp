/*bai 7 1335A*/

#include<stdio.h>
#define ll long long
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		ll n;
		scanf("%lld",&n);
		if(n%2==0){
			printf("%d\n",(n/2)-1);
		}
		else printf("%d\n",(n/2));
	}
}
