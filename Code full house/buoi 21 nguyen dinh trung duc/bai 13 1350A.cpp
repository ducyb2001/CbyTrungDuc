/*bai 13 1350A*/

#include<stdio.h>
int check(int n){
	int i;
	for(i=2;;++i){
		if(n%i==0)
		break;
	}
	return i;
}
int main(){
	int T;
	scanf("%d",&T);
	while (T--){
		int n,k;
		scanf("%d%d",&n,&k);
		int x=check(n);
		int tg=0;
		if(x%2==0){
			tg=n+2*k;
		}
		else if(x%2==1){
			tg=n+x+(k-1)*2;
		}
		printf("%d\n",tg);
	}
}
