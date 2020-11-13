/*bai 36 478A*/
#include<stdio.h>
int main(){
	int c1,c2,c3,c4,c5;
	scanf("%d%d%d%d%d",&c1,&c2,&c3,&c4,&c5);
	int x=c1+c2+c3+c4+c5;
	if(x==0){
		printf("-1");
		return 0;
	}
	else if(x%5!=0){
		printf("-1");
		return 0;
	}
	printf("%d",x/5);
}
