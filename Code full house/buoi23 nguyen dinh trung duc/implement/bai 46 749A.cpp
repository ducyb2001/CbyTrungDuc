/*bai 46 749A*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%2==0){
		int x=n/2;
		printf("%d\n",x);
		for(int i=1;i<x;i++){
			printf("2 ");
		}
		printf("2");
	}
	else{
		int x=n/2;
		printf("%d\n",x);
		for(int i=1;i<x;i++){
			printf("2 ");
		}
		printf("3");
	}
}
