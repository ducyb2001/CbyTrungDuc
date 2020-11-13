#include <stdio.h>
int main (){
	int i,j,n; 
	scanf ("%d", &n);
	int c=n-1;
	for (i=0; i<n; i++){
		for (j=1; j<=n; j++){
		c+=1;
		printf("%d ",c);
		}
		printf ("\n");
		c=n+i;
	}
}
