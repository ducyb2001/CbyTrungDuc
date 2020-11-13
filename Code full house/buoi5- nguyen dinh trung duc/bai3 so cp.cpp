#include<stdio.h>
#include<math.h>
int cp(int n){
	int x;
	x=sqrt(n);
	if(x*x==n) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	if(cp(n)) printf("yes");
	else printf("no");
}
