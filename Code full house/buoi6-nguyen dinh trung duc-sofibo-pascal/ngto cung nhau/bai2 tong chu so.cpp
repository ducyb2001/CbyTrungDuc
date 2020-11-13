/*bai 2 tong chu so */
#include<stdio.h>

void pt(long n){
	int r;
	int sum=0;
	while(n!=0){
	r=n%10;
	sum+=r;
	n/=10;
}
	printf("%d", sum);
}

int main(){
	int i,t;
	scanf("%d", &t);
	for(i=1;i<=t;i++){
		long n;
		scanf("%ld", &n);
		printf(" Test %d ", i);
		pt(n);
		printf("\n");
	}
}
