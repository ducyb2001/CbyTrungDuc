/* bai 3 tim so hoan hao trong doan cho truoc */

#include <stdio.h>

int check(int n){
	int i, sum=0;
	for (i=1; i<n; i++){
		if (n%i==0) sum+=i;
	}
	if (sum==n) return 1;
	return 0;
}
int main (){
	int i,a,b;
	scanf ("%d%d", &a,&b);
	for (i=a; i<=b; i++){
		if (check(i)==1) printf ("%d ", i);
	}
	return 0;
}

