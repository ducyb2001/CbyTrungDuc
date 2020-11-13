/* bai 34 tim giai thua */

#include <stdio.h>
int giaithua(int n){
	int i;
	int sum=1;
	for (i=2; i<=n; i++){
		sum*=i;
	}
	return sum;
}

int main(){
	int n;
	scanf ("%d", &n);
	printf("%d", giaithua(n));
	return 0;
}
