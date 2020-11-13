#include <stdio.h>
int sohoanhao(int n){
	int i;
	int temp=n;
	int sum=0;
	for (i=1; i<=n/2; i++){
	if (n%i==0) sum+=i;
	}
	if (sum==temp) return 1;
	return 0;
}

int main(){
	int n;
	scanf ("%d", &n);
	if (sohoanhao(n)) 
	printf ("1");
	else printf("0");
}
