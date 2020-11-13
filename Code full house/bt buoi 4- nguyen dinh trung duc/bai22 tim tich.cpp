/*bai 22 tim tich cac chu so cua 1 so */

#include <stdio.h>

int main(){
	int n;
	int tich=1;
	scanf ("%d", &n);
	while (n>0){
	tich*=n%10;
	n/=10;	
	}
	printf ("%d", tich);
}
