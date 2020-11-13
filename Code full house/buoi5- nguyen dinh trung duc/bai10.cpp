#include<stdio.h>
#include<math.h>
int snt(int n){
	int i;
	if(n<2) printf("no");
	for(i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int main(){
	int i,n;
	scanf("%d", &n);
	for(i=2; i<=n; i++){
		while (snt(i) && n%i==0) {
		printf("%d ", i);
		n=n/i;
	}
	}
}
