/* bai 20 thuan nghich loc  phat */
#include <stdio.h>
int thuannghich(int n){
	int sum=0,r;
	int temp=n;
	while (n>0){
	r=n%10;
	sum=sum*10+r;
	n/=10;
}
	if (temp==sum) return 1;
	return 0;
}

int chuso(int n){
	int r;
	while (n>0){
		r=n%10;
		n/=10;
		if (r==6) return 1;
 	}
 	return 0;
}

int tongchuso(int n){
	int r,a;
	int sum=0;
	while (n>0){
		r=n%10;
		n/=10;
		sum+=r;
	}
	a=sum%10; if (a==8) return 1;
	return 0;
}

int main(){
	int a,b,i;
	scanf ("%d%d",&a,&b);
	for (i=a;i<=b;i++){
	if (thuannghich(i)==1&&tongchuso(i)==1&&chuso(i)==1) 
	printf("%d", i);
}
return 0;
}
