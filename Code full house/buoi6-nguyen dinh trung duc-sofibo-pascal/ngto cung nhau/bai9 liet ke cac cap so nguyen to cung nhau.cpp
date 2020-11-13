/*bai 9 liet le cac cap so nguyen to cung nhau */
#include<stdio.h>

int gcd(int a, int b){
	if(a==0 || b==0) return a+b;
	while(a*b!=0){
		if(a>b){
			a%=b;
		}
		else{
			b%=a;
		}
	}
	return a+b;
}

void check(int a, int b){
	if (gcd(a,b)==1) printf("%d %d\n", a,b);
}

int main(){
	int a,b,i,j;
	scanf("%d %d", &a, &b);
	for(i=a; i<=b;i++){
		for(j=i; j<=b; j++){
			check(i,j);
		}
	}
}
