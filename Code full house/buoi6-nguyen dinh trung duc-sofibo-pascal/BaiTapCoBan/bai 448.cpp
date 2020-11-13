/* bai 448A - chep bai */

#include <stdio.h>
#include <math.h>
 
int min(int a,int b){
	if(a<b)
		return a;
	return b;
}
 
int main(){
	int a1,a2,a3,b1,b2,b3,n,k1,k2;
	scanf("%d%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3,&n);
	if((a1+a2+a3)%5==0){
		k1=(a1+a2+a3)/5;
	}
	else
		k1=(a1+a2+a3)/5+1;
	if((b1+b2+b3)%10==0){
		k2=(b1+b2+b3)/10;
	}
	else
		k2=(b1+b2+b3)/10+1;
	if(k1+k2<=n)
		printf("YES");
	else
		printf("NO");
	return 0;
}


