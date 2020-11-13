/*bai 10 S=1+1/2+1/3+....+1/n */

#include<stdio.h>

double tong(int n){
	if (n==1) return 1;
	else return (double)1/n + tong(n-1);
}
int main(){
	int n;
	scanf("%d",&n);
	double a=tong(n);
	printf("%.2lf",a);
}
