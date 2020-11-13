/*bai 5 tinh n!*/

#include<stdio.h>
int gt(int n){
	if(n==1) return 1;
	else return n*gt(n-1);
}
int main(){
	int n;
	scanf("%d",&n);
	int a=gt(n);
	printf("%d",a);
}
