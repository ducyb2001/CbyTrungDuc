/* bai 3 tim so hoan hao cho truoc */

#include <stdio.h>

int check(int n){
	int i;
	int sum=0;
	for (i=1; i<=n/2; i++){
		if (n%i==0) sum+=i;
	}
	if (sum==n) return 1;
	return 0;
}
int max(int a, int b){
	if (a>b) return a;
	return b;
}
int min(int a, int b){
	if (a<b) return a;
	return b;
}
int main (){
	int i,a,b;
	int ok=0;
	scanf ("%d%d", &a,&b);
	for (i=min(a,b);i<=max(a,b);i++){
		if (check (i)) {
		printf ("%d ", i);
		ok = 1; 
	}
	}
	if(ok==0) printf("0");
	return 0;
}
