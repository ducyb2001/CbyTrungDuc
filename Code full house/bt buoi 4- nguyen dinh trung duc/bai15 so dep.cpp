/*bai 15 so dep */

#include<stdio.h>
#include<math.h>
int check(int n){
	int c=n;
	int sum=0;
	int sum2=0;
	while (n>0){
		sum=sum*10+n%10;
		sum2=sum2+n%10;
		n/=10;
	}
	if (c==sum && sum2%10==0) return 1;
	return 0;
}

int main(){
	int i,n;
	int count=0;
	scanf ("%d", &n);
	for (i=1; i<= pow(10,n); i++){
		if (check (i)==1) count ++;
	}
	printf ("%d", count);
	return 0;
}
