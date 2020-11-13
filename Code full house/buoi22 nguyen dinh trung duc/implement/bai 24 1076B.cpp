/*bai 24 1076B*/

#include<stdio.h>
#include<math.h>
#define ll long long
ll nt(ll n){
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}

int main(){
	ll n;
	scanf("%lld",&n);
	if(n%2==0){
		printf("%lld",n/2);
		return 0;
	}
	else if(nt(n)){
		printf("1");
		return 0;
	}
	else{
		for(ll i=3; i<=sqrt(n);i++){
			if(nt(i)){
				if(n%i==0){
					n-=i;
					break;
				}
			}
		}
		printf("%lld",(n/2)+1);
	}
}
