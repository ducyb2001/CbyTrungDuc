#include <stdio.h>
#include <math.h>
int snt(int n){
	int i;
	for (i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int main(){
	int a,b,i;
	scanf ("%d%d", &a,&b);
	for (i=a; i<=b; i++){
		if (snt(i)==1) printf ("%d ", i);
	}
	return 0;
}
