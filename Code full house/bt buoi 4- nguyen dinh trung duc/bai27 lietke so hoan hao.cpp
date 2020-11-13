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
	scanf ("%d%d", &a,&b);
	for (i=min(a,b);i<=max(a,b);i++){
		if (check (i)) printf ("%d ", i);
	}
	return 0;
}
