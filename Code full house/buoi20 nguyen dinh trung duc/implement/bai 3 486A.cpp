/*bai 3 486A*/

#include<stdio.h>
#define ll long long 
int main(){
	ll n, kq=0;
	scanf("%lld",&n);
	if(n%2==0){
		kq+=n/2;
	}
	else kq=kq-(n/2)-1;
	printf("%lld",kq);
}
