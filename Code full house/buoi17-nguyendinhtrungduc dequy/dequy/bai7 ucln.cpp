/*bai 7 UCLN su dung de quy*/

#include<stdio.h>
int ucln(int a, int b){
	if(a%b!=0) 
		return ucln(b,a%b);
	else 
		return b;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int n=ucln(a,b);
	printf("%d",n);
}
