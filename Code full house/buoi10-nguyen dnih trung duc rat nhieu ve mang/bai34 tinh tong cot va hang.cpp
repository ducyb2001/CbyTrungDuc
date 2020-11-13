/* bai 34 tinh tong tung cot tung hang trong ma tran */

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n][n],b[n],c[n];
	for(int i=0;i<n;i++){
		int sum1=0;
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			sum1+=a[i][j];
		}
		b[i]=sum1;
	}
	printf("\n");
	for(int i=0;i<n;i++){
		int sum2=0;
		for(int j=0;j<n;j++){
			sum2+=a[j][i];	
		}
		c[i]=sum2;
	}
	for(int i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%d ",c[i]);
	}
}
