/*bai 14 loai bo hang va cot co tong lon nhat khoi ma tran */

#include<stdio.h>
int main(){
	int j,n,m;
	scanf("%d%d", &n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int t,k;
	int max1=-1e9;
	for(int i=0;i<n;i++){
		int sum=0;
		for(j=0;j<m;j++){
			sum+=a[i][j];
		}
		if(sum>max1){
			max1=sum;
			t=i;
		}
	}
	int max2=-1e9;
	for(int i=0;i<m;i++){
		int sum=0;
		for(j=0;j<n;j++){
			sum+=a[j][i];
		}
		if(sum>max2){
			max2=sum;
			k=i;
		}
	}
	for(int i=0;i<n;i++){
		if(i!=t){
			for(j=0;j<m;j++){
				if(j!=k){
					printf("%d ",a[i][j]);
				}
			}
			printf("\n");
		}
	}
}
