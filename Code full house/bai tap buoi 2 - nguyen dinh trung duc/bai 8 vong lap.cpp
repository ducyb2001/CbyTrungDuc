/*bai 8*/
#include <stdio.h>
int main (){
	int i,n;
	int sum=0;
	scanf ("%d", &n);
	for (i=1; i<=2*n-1; i+=2){
		sum += i;
	}
	printf ("%d", sum);
	return 0;
}
