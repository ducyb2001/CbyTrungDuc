/*bai 3 tong cac chu so chan*/

#include<stdio.h>

int tongsochan(int n){
	if(n>0){
	int res=n%10;
	if(res%2==0)  
		return res+tongsochan(n/10);
	else return 0+tongsochan(n/10);
	}
	return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	int a=tongsochan(n);
	printf("%d",a);
}
