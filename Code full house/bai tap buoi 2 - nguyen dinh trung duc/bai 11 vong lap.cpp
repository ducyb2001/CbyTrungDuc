/*bai 11 */
#include <stdio.h>
int main (){
	int x, y, i;
	scanf ("%d%d", &x, &y);
	int dapAn=1;
	for (i=1;i<=y; i++){
		dapAn*=x;
	}
	printf ("%d", dapAn);
	return 0;
}
