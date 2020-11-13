/*bai 3*/

#include <stdio.h>
int main (){
	int i, n;
	int sum=0;
	scanf ("%d", &n);
	for (i=1; i<=n; i++){
	if (i%3==0) sum+=i;
}
printf ("%d", sum);
}
