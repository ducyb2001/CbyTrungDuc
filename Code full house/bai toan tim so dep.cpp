#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int ktnguyento(int n){
	if (n<2) return false;
	int i;
	for (i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int csnguyento(int n){
	while (n>0){
		int c=n%10;
		n/=10;
		if (ktnguyento(c)) return 1;
	}
	return 0;
}

int tongcsnguyento(int n){
	int tong=0;
	while (n>0){
		tong+=n%10;
		n/=10;
	}
	if (ktnguyento(tong)){
		return 1;
	}
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
int main(){
	int i,a,b;
	int count=0;
	scanf ("%d%d", &a, &b);
	for (i=min(a,b); i<=max(a,b); i++){
		if (ktnguyento(i) && csnguyento(i) && tongcsnguyento(i)){
		count ++;
		}
	}
	printf("%d", count);
	return 0;
}
