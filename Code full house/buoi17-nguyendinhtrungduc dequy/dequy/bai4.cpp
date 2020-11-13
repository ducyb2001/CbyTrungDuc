/*bai 4 dem so luong chu so cua so nguyen duong */

#include<stdio.h>
int scs(int n){
	if(n<10) return 1;
	else return 1+scs(n/10);
}
int main(){
	int n;
	scanf("%d",&n);
	int a=scs(n);
	printf("%d",a);
}
