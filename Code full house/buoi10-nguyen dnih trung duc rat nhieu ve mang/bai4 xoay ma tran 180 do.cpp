/*bai 4 xoay ma tran 180 do */

//INPUT
//4
//1 2 3 4
//5 6 7 8
//9 10 11 12 
//13 14 15 16 
//OUTPUT 
//16 15 14 13 
//12 11 10 9 
//8 7 6 5 
//4 3 2 1

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
	for(int i=n-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
