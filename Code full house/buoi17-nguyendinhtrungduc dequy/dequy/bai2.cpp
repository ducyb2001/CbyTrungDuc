/*bai 2 S=1^2+2^2+3^2+.....+n^2 */

#include<stdio.h>
int tong(int n){
	if(n==1) return 1;
	else return n*n+tong(n-1);
}
int main(){
	int n;
	scanf("%d",&n);
	int a = tong(n);
	printf("%d",a);
}
