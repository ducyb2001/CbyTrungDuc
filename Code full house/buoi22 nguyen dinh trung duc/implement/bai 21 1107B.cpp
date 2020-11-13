/*bai 21 1107B */

#include<stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		long long k,x;
		scanf("%lld%lld",&k,&x);
		printf("%lld\n",9*(k-1)+x);
	}	
	return 0;
 } 
