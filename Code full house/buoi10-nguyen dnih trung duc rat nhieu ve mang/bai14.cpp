#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int max=-1e9,index1;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<m;j++){
			sum+=a[i][j];
		}
		if(sum>max){
			max=sum;
			index1=i;
		}
	}
	max=-1e9;int index2;
	for(int i=0;i<m;i++){
		int sum=0;
			for(int j=0;j<n;j++){
				if(j!=index1){
				sum+=a[j][i];
			}
			}
			if(sum>max){
				max=sum;
				index2=i;
			}
		
	}
	for(int i=0;i<n;i++){
		if(i!=index1){
			for(int j=0;j<n;j++){
				if(j!=index2){
					printf("%d ", a[i][j]);
				}
			}
			printf("\n");
		}
	}
}
