/*bai1 */
#include <stdio.h>
int main ()
{
	int n, i;
	int sum=0;
	printf ("nhap so n");
	scanf ("%d", &n);
		for (i = 1; i<=n; i++){
			sum = sum + i;
		}
		printf ("Dap an la %d", sum);
}
