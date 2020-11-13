/* bai 8*/

#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
void solve(int n){
	for(int i=2;i<=n;i++){
		if(nt(i)&&n%i==0){
		printf("%d ",i);
		}
	}
	printf("\n");
}
int main(){
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		printf("Test %d:\n", i);
		int n;
		scanf("%d", &n);
		solve(n);
	}
}
