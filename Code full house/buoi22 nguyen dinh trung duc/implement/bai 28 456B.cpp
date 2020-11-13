/*bai 28 456B*/
/*dung*/
#include<stdio.h>
#define ll long long
int main(){
	ll n;
	scanf("%lld", &n);
	ll x=n%4;
	if(x==0){
		printf("4");
		return 0;
	}
	printf("0");
}
