/*bai 25 liet ke phan tu xuat hien 1 lan trong mang*/

//#include<stdio.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++){
//		int dem=0;
//		for(int j=0;j<n;j++){
//			if(a[j]==a[i]){
//				dem++;
//		}
//	}
//		if(dem==1)
//			printf("%d ",a[i]);
//	}
//}

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<n;j++){
			if(a[j]==a[i]){
				cnt++;
			}
		}
		if(cnt==1){
			printf("%d ",a[i]);
		}
	}
}
