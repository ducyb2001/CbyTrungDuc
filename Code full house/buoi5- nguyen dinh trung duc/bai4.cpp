#include<stdio.h>
#include<math.h>

int uoc(int n){
	int i,count=0;
	int temp=n;
	int x=sqrt(n);
	for (i=1; i<=sqrt(n);i++){
		if (n%i==0) count++;
	}
	if (x*x!=temp) return count*2;
	else return count*2-1;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", uoc(n));
}
