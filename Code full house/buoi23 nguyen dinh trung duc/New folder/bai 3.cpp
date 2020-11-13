/*bai 3 */
/*cua anh Loc */
#include<stdio.h>
int n, a[10005];

void next(){
	int i=n-1;
	while(i>=1 && a[i]>a[i+1])
		i--;
	if(i==0){
		for(int i=1;i<=n;i++){
			printf("%d ",i);
		}
		printf("\n");
	}
	else{
		int k=n;
		while( a[i]>a[k]){
			k--;
		}
		int tmp=a[i];
		a[i]=a[k];
		a[k]=tmp;
		int l=i+1, r=n;
		while(l<r){
			int tmp=a[l];
			a[l]=a[r];
			a[r]=tmp;
			l++;
			r--;
		}
		for(int i=1;i<=n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
		}
		next();
	}
}
