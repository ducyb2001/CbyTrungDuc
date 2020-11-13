/* bai 16 */

#include <stdio.h>
int main(){
	int i,j,n;
	scanf ("%d", &n);
	for (i=1;i<=n;i++){
		for (j=(i-1)*n+1; j<=(i-1)*n+n;j++){
			if (j%2==0) printf ("0");
			else printf("1");
		}
		printf("\n");
	}
	return 0;
}
