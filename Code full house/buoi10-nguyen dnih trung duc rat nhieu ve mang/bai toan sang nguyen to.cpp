/* bai toan su dung sang nguyen to */

#include<stdio.h>
#include<math.h>
int prime[1000001];
void sieve(){
	for(int i=1;i<=1000000;i++){
		prime[i]=1;
	}
	prime[0]=0;
	prime[1]=0;
	for(int i=2;i<=sqrt(1000000);i++){
		if(prime[i]){
			for(int j=i*i;j<=1000000;j+=i){
				prime[j]=0;
			}
		}
	}
}
int main(){
	sieve();
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(prime[a[i][i]]){
			cnt++;
			prime[a[i][i]]=0;
		}
		if(prime[a[i][n-i-1]]){
			cnt++;
			prime[a[i][n-i-1]]=0;
		}
	}
	printf("%d", cnt);
}
