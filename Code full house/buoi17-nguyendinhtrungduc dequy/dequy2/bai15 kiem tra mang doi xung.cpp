/* bai 15 kiem tra mang doi xung */

#include<stdio.h>

int mangdx(int a[], int n, int i=0){
 	if(i>=n-1-i) return 1;
 	if(a[i]!=a[n-1-i]) return 0;
 	return mangdx(a,n,i+1);
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(mangdx(a,n)==0) printf("0");
	else printf("1");
}
