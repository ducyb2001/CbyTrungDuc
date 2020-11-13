#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(a%2==0 && b%2==1){
				if(i==a/2 || i==a/2 -1 || j==b/2){
					printf("0");
				}
				else printf("1");
			}
			else if(a%2==0 && b%2==0){
				if(i==a/2 || i==a/2 -1 || j==b/2 || j==b/2 -1){
					printf("0");
				}
				else printf("1");
			}
			else if(a%2==1 && b%2==0){
				if(i==a/2 || j==b/2 || j==b/2 -1){
					printf("0");
				}
				else printf("1");
			}	
		}
		printf("\n");
	}
}
