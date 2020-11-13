/*bai 45 */

#include<stdio.h>
#define ll long long
int main(){
	ll k,a,b;
	scanf("%lld%lld%lld",&k,&a,&b);
	ll sum=0;
	if (k % 2){
		sum+=a; 
		k--;
	}
	if (2*a>b){
		sum+=(k/2)*b;
	}
	else{
		sum+=k*a;
	}
	printf("%lld\n", sum);
}
