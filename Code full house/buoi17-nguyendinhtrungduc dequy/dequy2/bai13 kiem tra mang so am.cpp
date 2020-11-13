/*bai 13 kiem tra mang co toan so am hay khong */

#include<stdio.h>
int check(int a[],int n){
	if(n==-1) return(1);
	if(a[n]>0) return 0;
	else return check(a,n-1);
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(check(a,n)==0) printf("0");
	else printf("1");
}
