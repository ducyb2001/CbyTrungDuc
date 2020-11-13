/*bai 1 3 so lon nhat nhat */

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int max1=-1e9, max2=-1e9, max3=-1e9;
	for(int i=0; i<n; i++){
		if(a[i]>max1){
			max3=max2;
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2){
			max3=max2;
			max2=a[i];
		}
		else if(a[i]>max3){
			max3=a[i];
		}
	}
	printf("%d %d %d",max1,max2,max3);
}
