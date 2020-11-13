/*bai 15 577A*/

#include<stdio.h>
int main(){
	int n,x;
	scanf("%d%d",&n,&x);
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(x%i==0 && x/i<=n){
			cnt++;
		}
	}
	printf("%d",cnt);
}
