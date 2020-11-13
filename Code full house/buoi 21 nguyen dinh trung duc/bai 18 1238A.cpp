/*bai 18 1238A*/

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
	int a[10001];
	int cnt=0,k=0;
	while(cnt<10001){
		if(prime[k]){
			a[cnt]=k;
			cnt++;
		}
		k++;
	}
	int T;
	scanf("%d",&T);
	while(T--){
		int x,y;
		scanf("%d%d",&x,&y);
		int k=x-y;
		int flag=1;
		for(int i=0;i<1000;i++){
			if(k%a[i]==0){
				flag=0;
				printf("YES\n");
				break;
			}
		}
		if(flag==1){
			printf("NO\n");
		}
	}
}
