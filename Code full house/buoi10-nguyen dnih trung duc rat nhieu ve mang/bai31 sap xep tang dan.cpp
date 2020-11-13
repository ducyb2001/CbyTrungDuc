/*bai 31 sap xep tang dan */

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int tmp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
		printf("%d ", a[i]);
	}
}
