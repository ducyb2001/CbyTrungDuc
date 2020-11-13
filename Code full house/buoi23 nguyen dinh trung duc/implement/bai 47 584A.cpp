/*bai 47 584A */

#include<stdio.h>
#define ll long long
int main(){
	int n,t;
	scanf("%d%d",&n,&t);
	if(n==1 && t==10){
		printf("-1");
		return 0;
	}
	if(t==10){
		for(int i=1;i<=n-1;i++){
			printf("1");
		}
		printf("0");
	}
	else{
		for(int i=1;i<=n;i++){
			printf("%d",t);
		}
	}	
}
