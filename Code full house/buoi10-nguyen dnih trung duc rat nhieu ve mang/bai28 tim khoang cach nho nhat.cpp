/* bai 28 tim khoang cach nho nhat */

#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int m=1e9;
	int index1,index2;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(abs(a[j]-a[i])<m){
				m=abs(a[j]-a[i]);
				index1=i;
				index2=j;
			}
		}
	}
	int k=a[index1];
	if(a[index2]<k){
		a[index1]=a[index2];
		a[index2]=k;
		printf("%d %d %d",m,a[index1],k);
	}
	else printf("%d %d %d", m, a[index1], a[index2]);
}
