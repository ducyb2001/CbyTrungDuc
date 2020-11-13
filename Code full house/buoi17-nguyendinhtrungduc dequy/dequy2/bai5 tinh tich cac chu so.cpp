/*bai 5 tinh tich cac chu so*/

#include<stdio.h>
int tich(int n){
	if(n<10) return n;
	else return (n%10) * tich(n/10);
}
int main(){
	int n;
	scanf("%d",&n);
	int a=tich(n);
	printf("%d",a);
}
