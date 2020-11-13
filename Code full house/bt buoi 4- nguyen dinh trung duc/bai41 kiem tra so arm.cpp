/* bai 41 kiem tra so armstrong */
#include <stdio.h>
#include<math.h>

int dem (int n){
	int r;
	int count=0;
	while (n>0){
		r=n%10;
		n/=10;
		count ++;
	}
	return count;
}

int check (int n){
	int i,r,temp=n;
	int sum=0;
	int a=dem(n);
	while (n>0){
		r=n%10;
		n/=10;
		sum+=pow(r,a);
	}
	if (sum==temp) return 1;
	return 0;
}

int main(){
	int i;
	scanf ("%d", &i);
	if (check(i)==1) printf ("1");
	else printf ("0");
	return 0;
}
