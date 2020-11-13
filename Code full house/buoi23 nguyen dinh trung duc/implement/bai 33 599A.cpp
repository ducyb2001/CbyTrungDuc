/*bai 33 599A*/

#include<stdio.h>
int min(int a, int b){
	if(a<b) return a;
	return b;
}
int main(){
	int d1,d2,d3;
	scanf("%d%d%d",&d1,&d2,&d3);
	int x1=d1+d2+d3;
	int x2=2*d1+2*d2;
	int x3=2*d2+2*d3;
	int x4=2*d1+2*d3;
	int res=min (min(x1,x2) , min(x3,x4));
	printf("%d",res);
}
