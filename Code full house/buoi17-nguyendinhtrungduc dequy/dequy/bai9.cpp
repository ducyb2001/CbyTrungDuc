/*bai 9 tinh tong S=-1+2-3+4+.....+(-1)^n.n */

#include<stdio.h>
int tong(int n){
	if(n==0) return 0;
	if(n%2==0) return n + tong(n-1);
	else if(n%2==1) return -n+tong(n-1);
}
int main(){
	int n;
	scanf("%d",&n);
	int a=tong(n);
	printf("%d",a);
}
