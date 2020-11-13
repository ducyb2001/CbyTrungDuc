/*bai 4 tong cac chu so chan*/

#include<stdio.h>

int tongsole(int n){
	if(n>0){
	int res=n%10;
	if(res%2==1)  
		return res+tongsole(n/10);
	else return 0+tongsole(n/10);
	}
	return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	int a=tongsole(n);
	printf("%d",a);
}
