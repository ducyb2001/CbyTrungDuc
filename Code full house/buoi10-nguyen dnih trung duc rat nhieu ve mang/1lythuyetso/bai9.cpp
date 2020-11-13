/*bai 9*/

#include<stdio.h>
#define ll long long 
ll gcd(ll a, ll b){
	ll tmp;
	while(b){
		tmp=a%b;
		a=b;
		b=tmp;
	}
	return a;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll a,x,y;
		scanf("%lld%lld%lld",&a,&x,&y);
		ll uc=gcd(x,y);
		for(int i=1;i<=uc;i++){
			printf("%lld", a);
		}
		printf("\n");
	}
}
