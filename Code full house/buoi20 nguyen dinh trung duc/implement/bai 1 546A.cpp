/*bai 1 546A */

#include<stdio.h>

int tien(int k, int w){
	int tong=0;
	for(int i=1;i<=w;i++){
		tong+=k*i;
	}
	return tong;
}
int main(){
	int k,n,w;
	scanf("%d%d%d",&k,&n,&w);
	int chi=tien(k,w);
	if(chi > n){
		printf("%d",chi - n);
	}
	else printf("0");
}
