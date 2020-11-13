/*bai 37 734B*/

#include<stdio.h>

int min(int a, int b){
	if(a<b) return a;
	return b; 
}

int main(){
	int k2, k3, k5, k6;
	int tong;
	scanf("%d%d%d%d", &k2, &k3, &k5, &k6);
	int x=min(k2, min(k5,k6));
	k2-=x;
	k5-=x;
	k6-=x;
	tong=x*256;
	int y=min(k3,k2);
	tong+=y*32; 
	printf("%d",tong);
}


