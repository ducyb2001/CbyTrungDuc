/*bai 30 liet ke cac gia tri xuat hien trong mang */
//#include<stdio.h>
//void dem(int a[],int n){
//	for(int i=0;i<n;i++){
//		int cnt=1;
//		for(int j=i+1;j<n;j++){
//			if(a[j]==a[i]){
//				cnt++;
//			}
//		}
//		if(cnt==1) printf("%d ", a[i]);
//	}
//}
//
//int main(){
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d", &a[i]);
//	}
//	dem(a,n);
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
		if(ok==1){
			printf("%d ", a[i]);
		}
	}
}
