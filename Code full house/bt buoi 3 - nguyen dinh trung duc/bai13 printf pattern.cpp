/*bai13*/

#include <stdio.h>
int main(){
	int i,j,n;
	scanf ("%d", &n);
	for (i=1;i<=n;i++){
		for (j=(i-1)*n+1; j<=(i-1)*n+n; j++){
			printf ("%d ", j);
		}
		printf ("\n");
	}
	return 0;
}
