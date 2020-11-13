/* bai 16 dem so luong chu so cua n la so nguyen to */

#include<stdio.h>
#include<math.h>
int check (int n){
	int i;
	if (n<2) return 0;
	for (i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int temp;
	long long n;
	int count=0;
	scanf ("%lld", &n);
	while (n!=0){
		temp=n%10;
		if (check(temp)) count++;
		n/=10;
	}
	printf ("%d", count);
	return 0;
}
