/* bai 35*/

#include<stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int a,b,c,n;
		scanf("%d%d%d%d",&a,&b,&c,&n);
		int x=a+b+c+n;
		if(x%3==0) printf("YES\n");
		else printf("NO\n");	
	}
}
