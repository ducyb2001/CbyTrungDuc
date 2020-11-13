/*bai 44 1061A */
#include<stdio.h>
int main(){
	int n,s;
	scanf("%d%d",&n,&s);
	int x=s/n;
	if(s%n==0){
		printf("%d",x);
	}
	else printf("%d",x+1);
}
