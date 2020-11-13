#include<stdio.h>
int tongChuSo(int n){
	int r;
	int sum=0;
	while(n){
		r=n%10;
		sum+=r;
		n/=10;
	}
	return sum;
}

void check(int a, int b){
	int max=tongChuSo(a);
	if (tongChuSo(b) > max) {
		printf("%d %d", a,b);
	}
	else if(tongChuSo(b)==max){
		printf("%d %d", a,b );
	}
	else printf("%d %d", b, a);
}

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	check(a,b);
}
