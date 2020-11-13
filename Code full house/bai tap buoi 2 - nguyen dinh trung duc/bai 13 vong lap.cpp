/*bai 13*/
#include <stdio.h>
int main (){
	long long n;
	int sum=0;
	scanf("%lld", &n);
	while (n!=0){
		sum+=n%10;
		n/=10;
	}
	printf ("%d", sum);
	return 0;
}
