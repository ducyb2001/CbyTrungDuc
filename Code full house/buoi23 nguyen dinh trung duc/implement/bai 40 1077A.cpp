/* bai 40 1077A */

#include<stdio.h>
#define ll long long
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		ll a,b,k;
		scanf("%lld%lld%lld",&a,&b,&k);
		ll kq=0;
		if(k%2==0){
			kq=a*(k/2) - b*(k/2);
		}
		else{
			kq=a*((k/2)+1) - b*(k/2);
		}
		printf("%lld\n",kq);	
	}
}
