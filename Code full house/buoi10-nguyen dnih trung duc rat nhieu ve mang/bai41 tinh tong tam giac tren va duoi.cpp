/*bai 41 tinh tong cac tam giac tren va duoi */

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int s1=0,s2=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<j) s1+=a[i][j];
			else if(i>j) s2+=a[i][j];
		}
	}
	printf("%d %d",s1,s2);
}
