#include <stdio.h>
#include <math.h>
int nto(int n){
	int i;
	if (n<2) return 0;
	for (i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
		return 1;
	}
}

int check(int a){
	int sum=0;
	int r;
	while (a!=0){
		r=a%10;
		sum+=r;
		a/=10;
	}
	if (nto(r)&&nto(sum)&&nto(a)) return 1;
	return 0;
}

int main(){
	int i,a,b;
	scanf ("%d%d",&a,&b);
	for (i=a; i<=b; i++){
		if (check(i)==1) printf ("%d ", i);
	}
	return 0;
}
