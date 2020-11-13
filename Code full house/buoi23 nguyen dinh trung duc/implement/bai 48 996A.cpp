/*bai 48 996A */

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int cnt=0;
	if(n>=100){
		int x=n/100;
		cnt+=x;
		n=n-(x*100);
	}
	if(n>=20){
		int x=n/20;
		cnt+=x;
		n=n-(x*20);
	}
	if(n>=10){
		int x=n/10;
		cnt+=x;
		n=n-(x*10);
	}
	if(n>=5){
		int x=n/5;
		cnt+=x;
		n=n-(x*5);
	}
	printf("%d",cnt+n);
}
