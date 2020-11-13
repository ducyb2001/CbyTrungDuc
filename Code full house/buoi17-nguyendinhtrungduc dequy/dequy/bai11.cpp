/*bai 11 to hop chap k cua n*/

#include<stdio.h>
int gt(int n){
	if(n==1) return 1;
	else return n*gt(n-1);
}

int tohop(int k,int n){
	return (gt(n)/(gt(k)*gt(n-k)));
}
int main(){
	int k,n;
	scanf("%d%d",&n,&k);
	int a=tohop(k,n);
	printf("%d",a);
}
