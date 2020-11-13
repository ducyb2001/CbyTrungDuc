/* bai 30 */

#include <stdio.h>
int main(){
	int i,j,n;
	scanf ("%d", &n);
	for (i=1; i<=n; i++){
		for (j=(i-1)*n*n+n; j<= i*n*n; j+=5){
			printf ("%d ", j);
		}
		printf ("\n");
	}
}
