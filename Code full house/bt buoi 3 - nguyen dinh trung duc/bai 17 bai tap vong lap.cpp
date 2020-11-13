/* bai17 bai tap vong lap */

#include <stdio.h>
int main(){
	int count1=0, count2=0;
	int temp=0;
	long long n;
	scanf ("%lld", &n);
	while (n!=0){
		temp=n%10;
		if (temp%2==0) count1++;
		if (temp%2!=0) count2++;
		n/=10;
	}
	if (count1==count2) printf ("yes");
	else printf ("no");
	return 0;	
}
