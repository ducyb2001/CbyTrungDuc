/*bai 3 tinh so fibo */

#include<stdio.h>
int tong(int n){
	if(n==1 || n==2) return 1;
	else return tong(n-1)+tong(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
	int a=tong(n);
	printf("%d",a);
}
