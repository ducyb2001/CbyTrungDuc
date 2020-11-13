#include<stdio.h>
#include<math.h>

long nto(long n){
	int i;
	if (n<2) return 0;
	for(i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	long n;
	scanf("%lld", &n);
	if(nto(n)) printf("yes");
	else printf("no");
}
