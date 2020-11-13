/*bai 15 in ra so luong chu so chan, le cua n */
#include <stdio.h>
int main (){
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
	printf ("\n%d", count1);
	printf ("\n%d", count2);
	return 0;	
}
