/*bai 30 chu so dau tien va cuoi cung */

#include<stdio.h>
int main(){
	int i,n,r;
	scanf ("%d", &n);
	int temp=n;
	while (n>0){
		r=n%10;
		n/=10;
		if (n==0) printf("%d", r);
	}
	printf(" %d",temp%10);
	return 0;
}
