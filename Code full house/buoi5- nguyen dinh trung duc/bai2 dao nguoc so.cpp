#include<stdio.h>
void dao(int n){
	int r,c=0;
	while (n){
		r=n%10;
		c=c*10+r;
		n/=10;
	}
	printf("%d", c);
}
int main(){
	int n;
	scanf("%d", &n);
	dao(n);
}
