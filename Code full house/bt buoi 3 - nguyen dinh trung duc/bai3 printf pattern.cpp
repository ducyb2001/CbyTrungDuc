/*bai 3 t lam thu 2 cach nhe m*/

#include <stdio.h>
int main(){
	int i,j,n;
	scanf ("%d", &n);
//	for (i=n; i>=1; i--){
//		for (j=1;j<=i; j++){
//			printf ("*");
//		}
//		printf("\n");
//	}
	for (i=1; i<=n; i++){
		for (j=1; j<=n-i+1; j++){
			printf ("*");
		}
		printf ("\n");
	}
	return 0;
}
