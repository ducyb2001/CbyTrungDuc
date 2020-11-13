/*bai 8 tim chu so dau tien cua n*/

#include<stdio.h>
int csdautien(int n){
	if(n<10) return n;
	else return csdautien(n/10);
}
int main(){
	int n;
	scanf("%d",&n);
	int a=csdautien(n);
	printf("%d",a);
}
