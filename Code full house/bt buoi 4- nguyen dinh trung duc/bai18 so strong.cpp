/*bai 18 so strong */
#include <stdio.h>
int giaithua(int n){
	int i; int ketqua=1;
	for (i=1; i<=n; i++){
		ketqua*=i;
	}
	return ketqua;
}
int check (int n){
	int i,r;
	int temp=n; 
	int sum=0;
	while (n>0){
		r=n%10;
		sum+=giaithua(r);
		n/=10;
	}
	if (temp==sum) return 1;
	return 0;
}
int max(int a, int b){
	if (a>b) return a;
	return b;
}
int min(int a, int b){
	if (a<b) return a;
	return b;
}

int main(){
	int i,a,b, ok=0;
	scanf ("%d%d", &a, &b);
	for (i=min(a,b); i<= max(a,b); i++){
		if (check(i)==1) {
		printf("%d ", i);
		ok=1;
	}
	}
	if(!ok) printf("0");
	return 0;
}
