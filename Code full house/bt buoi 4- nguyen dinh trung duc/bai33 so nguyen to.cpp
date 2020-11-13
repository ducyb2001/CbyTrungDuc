/* bai 33 so nguyen to */

#include <stdio.h>
#include<math.h>
int snt(int n){
	int i;
	for (i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf ("%d", &n);
	if (snt(n)==1) printf ("1");
	else printf ("0");
}
