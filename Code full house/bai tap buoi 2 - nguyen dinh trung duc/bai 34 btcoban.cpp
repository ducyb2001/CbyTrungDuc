/*bai 34 part 2*/
#include <stdio.h>
int main(){
	int i, n;
	int fact=1;
	scanf ("%d", &n);
	for (i=1; i<=n; i++){
		fact = fact * i;
	}
	printf ("%d", fact);
}
