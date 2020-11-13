/* in ra n so fibo dau tien */

#include<stdio.h>

void fibo(int n){
	int i;
	int f1=0, f2=1, fn=0;
	if(n==1) printf("0 ");
	else if(n>1) printf("0 ");
	for (i=2; i<=n; i++){
		f1=f2;
		f2=fn;
		fn=f1+f2;
		printf("%d ", fn);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	fibo(n);
}
