/*bai 7 mang tang */

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<=a[i]){
				printf("No");
				return 0;
			}
		}
	}
	printf("Yes");
}
