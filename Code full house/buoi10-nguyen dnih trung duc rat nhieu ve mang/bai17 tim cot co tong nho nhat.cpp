/* bai 17 tim cot co tong phan tu la nho nhat */

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int index;
	int m=1e9;
	for(j=0;j<n;j++){
		int sum=0;
		for(i=0;i<n;i++){
			sum+=a[j][i];
		}
		if(sum<m){
			m=sum;
			index=j;
		}
	}
	printf("%d\n", index+1);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		}
	printf("%d ",a[i][index]);
	}
}
