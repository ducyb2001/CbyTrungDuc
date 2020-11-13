/*bai 20*/
#include <stdio.h>
int main (){
	int i,n;
	scanf ("%d", &n);
	while (i<=1000){
		if (i%n==0) printf ("%d  ", i);
		i++;
	}
	return 0;
}
