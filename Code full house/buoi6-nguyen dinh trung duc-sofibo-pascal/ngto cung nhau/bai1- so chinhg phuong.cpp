#include<stdio.h>
#include <math.h>

void check(int n){
	int r=sqrt(n);
	if (n==0) printf("NO");
	else if(r*r==n) printf("YES");
	else printf("NO");
}
int main(){
	int i,t;
	scanf("%d", &t);
	for(i=1;i<=t;i++){
		int n;
		scanf("%d", &n);
		printf(" Test %d ", i);
		check(n);
		printf("\n");
	}
}
