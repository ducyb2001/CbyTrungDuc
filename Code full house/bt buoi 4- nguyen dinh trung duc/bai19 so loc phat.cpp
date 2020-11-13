/* bai 19 so loc phat */

#include <stdio.h>

int locphat(int n){
	int r;
	while (n>0){
	r=n%10;
	n/=10;
	if (r!=0 || r!=6 || r!=8) return 0;
}
return 1;
}

int main(){
	int n;
	scanf ("%d", &n);
	if (locphat(n)==1) printf ("1");
	else printf ("0");
}

