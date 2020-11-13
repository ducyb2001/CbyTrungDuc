/*bai 14 742A*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[4]={6,8,4,2};
	if(n==0){
		printf("1");
	}
	else printf("%d",a[n%4]);
}
