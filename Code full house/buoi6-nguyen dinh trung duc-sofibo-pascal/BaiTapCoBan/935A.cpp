/*bai 935 A */

#include<stdio.h>
#include<math.h>
int nto(int n){
	int i;
	if (n<2)  return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

void check(int n){
	int i, count=0;
	for(i=1;i<=n/2;i++){
		if((n-i)%i==0){
			count++;
		}
	}
	printf("%d", count);
}

int main(){
	int n;
	scanf("%d", &n);
	if(nto(n)==1) printf("1");
	else {
		check(n);
	}
}
