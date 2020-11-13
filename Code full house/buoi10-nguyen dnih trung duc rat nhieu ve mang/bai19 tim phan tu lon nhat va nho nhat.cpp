/* bai 19 va 20 tim phan tu lon nhat va nho nhat trong mang */

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int m1=-1e9,m2=1e9;
	for(int i=0;i<n;i++){
		if(a[i]>m1){
			m1=a[i];
		}
		if(a[i]<m2){
			m2=a[i];
		}
	}
	printf("%d %d", m1, m2);
}
