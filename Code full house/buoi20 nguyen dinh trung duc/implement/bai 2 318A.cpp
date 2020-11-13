/*bai 2 318 A*/

#include<stdio.h>
int main(){
	long long k,n;
	scanf("%lld%lld",&k,&n);
	long long kq;
	long long nua;
	if(k%2==0){
		nua=k/2;
		if(n<=nua){
			kq=n*2-1;
		}
		else kq=(n-nua)*2;
	}
	else {
		nua = (k/2)+1;
		if(n<=nua){
			kq=n*2-1;
		}
		else kq=(n-nua)*2;
	}
	printf("%lld",kq);
}
