/* bai 10*/
#include <stdio.h>
int main(){
	int i,n;
	int tich =1;
	scanf ("%d", &n);
	for (i=1; i<=n; i++){
		tich = tich * i;
	}
	printf ("%d", tich);
	return 0;
}
