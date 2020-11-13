/*bai 4 selection sort*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min,cnt=1;
	for(int i=0;i<n-1;i++){
		int ok=0;
		min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
				ok=1;
			}
		}
		int tmp=a[min];
		a[min]=a[i];
		a[i]=tmp;
		if(ok==1){
		printf("Buoc %d:",cnt++);
		for(int j=0;j<n;j++){
			printf("%d ",a[j]);
		}
		printf("\n");
		}
	}
}
