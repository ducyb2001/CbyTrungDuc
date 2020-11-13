#include<stdio.h>
#include<math.h>

int cp(int n){
	int x; 
	x=sqrt(n);
	if(x*x==n) return 1;
		return 0;
}

int fibo(int n){
	if(cp(5*n*n-4)||cp(5*n*n+4))
		return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	if(fibo(n)) printf("1");
	else printf("0");
}
