/* dot truoc tui gui ba den bai 13 r nen gio tui chi lam tu 14 nhe */

/* bai 14 bai tap vong lap */

#include <stdio.h>
int main(){
	long long n;
	scanf ("%lld", &n);
	int sum1=0, sum2=0, temp;
	while (n!=0){
		temp=n%10;
		if (temp%2==0) sum1+=temp;
		if (temp%2!=0) sum2+=temp;
		n/=10;
	}
	printf ("%d ", sum1);
	printf ("\n%d", sum2);
	return 0;
}
