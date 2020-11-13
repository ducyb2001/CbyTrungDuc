#include<stdio.h>
#include<math.h>

int uoc(int n){
	int i;
	int temp=n;
	int sum=0;
	for(i=1;i<=sqrt(n);i++){
		if(n%i==0) {
			sum+=i;
			sum+=n/i;
		}
	}
	int can=sqrt(n);
	if (can*can!=temp) return sum;
	else return sum-can;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", uoc(n));
}
