/*bai 1 sorting*/
#include<stdio.h>
#include<math.h>

void selectionsort(int a[],int n){
	int min,i,j;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		int tmp=a[min];
		a[min]=a[i];
		a[i]=tmp;
	}
}

void interchangesort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
}

void bubblesort(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=a[j];
			}
		}
	}
}

void insertionsort(int a[],int n){
	for(int i=1;i<n;i++){
		int x=a[i];
		int j=i-1;
		while(j>=0&&a[j]>x){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
//	selectionsort(a,n);
//	interchangesort(a,n);
//	bubblesort(a,n);
	insertionsort(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
