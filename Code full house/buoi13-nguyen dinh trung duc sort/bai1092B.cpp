/*Bai 1092B*/

#include<stdio.h>
void sort(int a[],int n){
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
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,n);
	int tong1=0,tong2=0;
	for(int i=0;i<n;i++){
		if(i%2==0){
			tong1+=a[i];
		}
		if(i%2==1){
			tong2+=a[i];
		}
	}
	printf("%d",tong2-tong1);
}
