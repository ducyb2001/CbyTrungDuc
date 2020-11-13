#include<stdio.h>
#include<math.h>
int nto(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int a[100];
int main() {
	int i,j,n,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("a[%d] = ", i+1);
		scanf("%d", &a[i]);
	}
	for(i=0;i<n-1;i++) {
		for(j=i+1;j<n;j++) {
			if(a[i]<a[j]&&nto(a[i])&&nto(a[j])){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
//			else if(a[i]<a[j]&&a[i]%2==1&&a[j]%2==1){
//				temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
		}
	}
	printf("mang sau khi sap xep: ");
	for(i=0;i<n;i++) {
		printf(" %d ", a[i]);
	}
	return 0;
}
