#include<stdio.h>

int palin(int n){
	int r=0, temp=n;
	while(n){
	r=r*10+n%10;
	n/=10;
	}
	if (r==temp) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	if (palin(n)) printf("1");
	else printf("0");
}



