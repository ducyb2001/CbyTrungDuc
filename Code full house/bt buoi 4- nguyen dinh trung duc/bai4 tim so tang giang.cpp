/*bai 4 tim so tang giam */

#include<stdio.h>
#include<math.h>
int snt(int n){
	int i;
	for (i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int tang(int n){
	int t=n%10;
	n/=10;
	while(n>0){
		if (t<=n%10) return 0;
		t=n%10;
		n/=10;
	}
	return 1;
}

int giam(int n){
	int t=n%10;
	n/=10;
	while (n>0){
		if(t>=n%10) return 0;
		t=n%10;
		n/=10;
	}
	return 1;
}

int main(){
	int i,n;
	int count=0;
	scanf("%d", &n);
	for (i=pow(10,n-1); i<=pow(10,n); i++){
		if (snt(i) && (tang(i) || giam (i)))
		count++;
	}
	printf("%d", count);
}
