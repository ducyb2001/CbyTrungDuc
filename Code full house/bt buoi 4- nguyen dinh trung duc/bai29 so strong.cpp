/* bai 29 so strong */

#include<stdio.h>

long giaithua(int n)
{
    long result=1;
    for (int i=2;i<=n;i++) result*=i;
    return result;
}

int check (int n){

int r;
int temp=n;
int sum=0;

	while (n>0){
		r=n%10;
		sum+=giaithua(r);
		n/=10;
	}
	if (sum==temp) return 1;
	return 0;
}
int main(){
	int n;
	scanf ("%d",&n);
	if (check(n)) printf ("1");
	else printf ("0");
}


