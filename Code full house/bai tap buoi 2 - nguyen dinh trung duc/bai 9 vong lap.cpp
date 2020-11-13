/*bai 9*/
#include <stdio.h>
int main (){
	int i, n;
	int sum=0;
	scanf ("%d", &n);
	for (i=1; i<=n; i++){
		sum += i*i*i;
	}
	printf ("%d", sum);
	return 0;
}
