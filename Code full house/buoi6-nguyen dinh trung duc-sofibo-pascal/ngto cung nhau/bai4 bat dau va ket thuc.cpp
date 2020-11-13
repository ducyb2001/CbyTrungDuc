#include<stdio.h>


void check(long n){
	long r;
	int temp=n%10;
	while(n){
		r=n%10;
		n/=10;
	}
	if(temp==r) printf("YES");
	else printf("NO");
}

int main(){
	int t,i;
	scanf("%d", &t);
	for(i=1;i<=t;i++){
		long n;
		scanf("%ld", &n);
		printf("Test %d ", i );
		check(n);
		printf("\n");
	}
}
