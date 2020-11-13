#include<stdio.h>
#include<math.h>
int gcd(int a, int b){
	if(a==0 || b==0){
		return a+b;
	}
	while (a!=b){
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}

int lcm (int a, int b){
	return (a*b/gcd(a,b));
}

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d", gcd(a,b));
	printf("\n%d", lcm(a,b));
}
