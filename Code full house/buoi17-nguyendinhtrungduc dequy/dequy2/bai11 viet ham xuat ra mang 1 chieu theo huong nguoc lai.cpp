/*bai 11 viet ham xuat ra mang 1 chieu theo huong nguoc lai */

#include<stdio.h>

void xuatnguoc(int a[],int n){
	if(n==-1) return;
	printf("%d ",a[n]);
	xuatnguoc(a,n-1); 
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	xuatnguoc(a,n-1);
}
