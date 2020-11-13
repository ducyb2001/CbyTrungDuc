/*bai 5 tong chu so chia het cho 10 */
#include<stdio.h>

void check(long n){
	int sum=0;
	long r;
	while(n){
		r=n%10;
		sum+=r;
		n/=10;
	}
	if(sum%10==0) printf("YES");
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
