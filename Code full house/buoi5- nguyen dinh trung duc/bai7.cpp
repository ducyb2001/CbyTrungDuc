#include<stdio.h>
#include<math.h>

int uoc(int n){
	int i, count=0;
	int can=sqrt(n);
	int temp=n;
	for(i=1; i<=sqrt(n);i++){
		if(n%i==0) count++;
	}
	if (can*can!=temp) return count*2;
	else return count*2-1;
}

int main(){
	int n;
	scanf("%d", &n);
	if (uoc(n)%2!=0) printf("yes");
	else printf("no");
}
