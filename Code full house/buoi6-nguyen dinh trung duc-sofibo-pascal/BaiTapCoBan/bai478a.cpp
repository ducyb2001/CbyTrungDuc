/*bai 478A */

#include<stdio.h>
int main(){
	int a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	int sum=a+b+c+d+e;
	if((sum)%5==0 && sum>=5) printf("%d", sum/5);
	else printf("-1");
	return 0; 
}
