/*bai 30 ve nua hinh thoi */

#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
	for(j=n-i;j>0;j--){
		printf("~");
	}
	for(j=1; j<=i; j++){
		printf("*");
	}
	printf("\n");
	}
	for(i=1; i<=n-1;i++){
		for(j=1;j<=i;j++){
			printf("~");
		}
		for(j=n-i;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
}
