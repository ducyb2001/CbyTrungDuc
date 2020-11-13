/*bai 15 tim cot co tong cac phan tu lon nhat */

//#include<stdio.h>
//int main(){
//	int n;
//	scanf("%d", &n);
//	int a[n][n];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//	int index,i,j;
//	int m1=-1e9;
//	for(j=0;j<n;j++){
//		int sum=0;
//		for(i=0;i<n;i++){
//			sum+=a[j][i];
//		}
//		if(sum>m1){
//			m1=sum;
//			index=j;
//		}
//	}
//	printf("%d\n",index+1);
//	
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//		}
//	printf("%d ",a[i][index]);
//	}
//}

#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d", &n);
	int a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int max=-1e9,index;
	for(i=0;i<n;i++){
		int sum=0;
		for(j=0;j<n;j++){
			sum+=a[j][i];
		}
		if(sum>max){
			max=sum;
			index=i;
		}
	}
	printf("%d\n", index+1);
	for(i=0;i<n;i++){
		printf("%d ", a[i][index]);
	}
}
