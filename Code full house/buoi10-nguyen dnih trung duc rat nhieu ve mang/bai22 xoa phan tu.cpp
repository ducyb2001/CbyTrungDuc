/* bai 22 xoa phan tu */

//INPUT
//5
//2 3 7 9 1 
//3 
//OUTPUT 
//2 3 9 1
#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int p;
	scanf("%d", &p);
	for(int i=0;i<p-1;i++){
		printf("%d ",a[i]);
	}
	for(int i=p-1;i<n-1;i++){
		printf("%d ", a[i+1]);
	}
}
