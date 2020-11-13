/* bai 3 chen mang mot chieu */

//INPUT
//4 3 1
//5 3 6 7
//2 9 11
//OUTPUT
//5 2 9 11 3 6 7

#include<stdio.h>
int main(){
	int n,m,p;
	scanf("%d%d%d", &n, &m, &p);
	int a[n], b[m];
	for(int i=0; i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d", &b[i]);
	}
	int c[n+m];
	for(int i=0;i<p;i++){
		printf("%d ",a[i]);
	}
	for(int i=p;i<m+p;i++){
		printf("%d ",b[i-p]);
	}
	for(int i=m+p;i<n+m;i++){
		printf("%d ", a[i-m]);
	}
}
