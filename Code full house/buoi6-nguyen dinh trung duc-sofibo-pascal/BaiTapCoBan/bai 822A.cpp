/* 822A chep bai */

#include <stdio.h>
 
int min(int a,int b){
	if(a<b)
		return a;
	return b;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int m=min(a,b);
	long long res=1;
	for(int i=1;i<=m;i++)
		res*=i;
	printf("%lld",res);
	return 0;
}
