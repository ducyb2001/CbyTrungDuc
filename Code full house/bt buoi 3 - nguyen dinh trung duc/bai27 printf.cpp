/* bai 27 */

#include <stdio.h>
int main(){
	int i,j,a,b;
	scanf ("%d%d", &a, &b);
	for (i=1; i<=a; i++){
		for (j=(i-1)*b+1; j<=(i-1)*b+b; j++){
			printf ("%d ", j);
		}
		printf ("\n");
	}
}
