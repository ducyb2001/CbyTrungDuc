#include<stdio.h>

int pt(long n){
	long r;
	int ok=0;
	while(n){
		r=n%10;
		n/=10;
		if(r!=0 && r!= 6 && r!=8) return 0;
	return 1;
	}	
}

void check(long n){
	if(pt(n)==1) printf("Yes");
	else printf("No");
}

int main(){
	int t;
	scanf("%d ", &t);
	for(int i=1;i<=t;i++){
		long n;
		scanf("%ld", &n);
		printf("Test %d ", i);
		check (n);
		printf("\n");
	}
}
