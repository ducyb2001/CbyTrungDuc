/*bai 1 kiem tra so chan*/

#include<stdio.h>
int check(int n){
	if(n){
	int res=n%10;
	if(res%2==1) return 0;
	else return check(n/10);
	}
	return 1;
}
int main (){
	int n;
	scanf("%d",&n);
	if(check(n)==0) printf("0");
	else printf("1");
}
