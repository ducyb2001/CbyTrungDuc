/* kiem tra so thuan nghich */

#include <stdio.h>

int check (int n){
	int r, temp=n;
	int sum=0;
	while (n>0){
		r=n%10;
		sum=sum*10+r;
		n/=10;
	}
	if (temp==sum) return 1;
	return 0;
}

int main (){
	int n;
	scanf ("%d", &n);
	if (check(n)==1) printf ("1");
	else printf ("0");
}
