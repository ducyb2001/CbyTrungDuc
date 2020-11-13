/*bai 54 so archiles */

#include<stdio.h>
#include<math.h>

int nto(int n){
	int i;
	if(n<2) return 0;
	for(i=2; i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int check(int n){
	int k,ok=0;
	for(k=1;k<=n/2;k++){
		if(nto(k)==1 && n%k==0){
			if(n%(k*k)==0) ok=1;
			else return 0;
		}
	}
	if (ok==1) return 1;
	else return 0;
}

int max(int a, int b){
	int max=a;
	if(a<b) max=b;
	return max;
}

int min(int a, int b){
	int min =a;
	if (a>b) min=b;
	return min;
}
int main(){
	int a,b,i;
	scanf("%d %d", &a, &b);
	for(i=min(a,b); i<=max(a,b); i++){
		if (check(i)==1) printf("%d ", i);
	}
	return 0;
}
