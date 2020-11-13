/* bai 40 xoa phan tu trung */

//#include<stdio.h>
//void xoa(int a[], int &n, int vitrixoa){
//	for(int i=vitrixoa;i<n;i++){
//		a[i]=a[i+1];
//	}
//	n--;
//}
//void xoaPhanTuTrung(int a[], int &n){
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if(a[i]==a[j]){
//				xoa(a,n,j);
//				i--;
//			}
//		}
//	}
//}
//int main(){
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d", &a[i]);
//	}
//	xoaPhanTuTrung(a,n);
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		int ok=1;
		for(int j=0;j<i;j++){
			if(a[j]==a[i]){
				ok=0;
				break;
			}
		}
		if(ok==1) printf("%d ",a[i]);
	}
}


