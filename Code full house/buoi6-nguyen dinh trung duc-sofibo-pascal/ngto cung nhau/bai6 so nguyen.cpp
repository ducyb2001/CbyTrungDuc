/*bai 6 so nguyen to */
#include<stdio.h>
#include<math.h>
int snt(int n){
	int i;
	if(n<2) return 0;
	for(i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int check(int n){
	if (snt(n)==1) printf("YES");
	else printf("NO");
}

int main(){
	int t,i;
	scanf("%d", &t);
	for(i=1;i<=t;i++){
		long n;
		scanf("%ld", &n);
		printf("Test %d ", i );
		check(n);
		printf("\n");
	}
}
