/*bai 9 ktra co so do hay khong*/

//#include<stdio.h>
//
//int check(int a[],int n,int x){
//	for(int i=0;i<n;i++){
//		if(a[i]==x){
//			return 1;
//		}
//	}
//	return 0;
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	int t;
//	scanf("%d",&t);
//	for(int i=0;i<t;i++){
//		int x;
//		scanf("%d",&x);
//		if(check(a,n,x)){
//			printf("1\n");
//		}
//		else printf("-1\n");
//	}
//}

//#include<stdio.h>
//int sort(int a[],int n){
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if(a[j]<a[i]){
//				int tmp=a[i];
//				a[i]=a[j];
//				a[j]=tmp;
//			}
//		}
//	}
//}
//
//int bs(int a[],int n, int x){
//	int l=0,r=n-1;
//	while(l<=r){
//		int mid=l+(r-l)/2;
//		if(a[mid]==x){
//			return 1;
//		}
//		else if(a[mid]>x){
//			r=mid-1;
//		}
//		else l=mid+1;
//	}
//	return -1;
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[100];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	sort(a,n);
//	int T;
//	scanf("%d",&T);
//	while(T--){
//		int x;
//		scanf("%d",&x);
//		printf("%d\n",bs(a,n,x));
//	}
//	return 0;
//}
