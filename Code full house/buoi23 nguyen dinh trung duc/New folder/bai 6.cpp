/*bai 6*/

#include<stdio.h>
int n, a[1000], ok;

void dau(){
	int cnt=1;
	for(int i=1;i<=n;i++){
		a[i]=cnt++;
	}
}

void sinh(){
	int i=n-1;
	while(i>=1 && a[i]>a[i+1])
		i--;
	if(i==0){
		ok=0;
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
	}
}

void in(){
	for(int i=1;i<=n;i++){
		printf("%d",a[i]);
	}
	printf(" ");
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		ok=1;
		dau();
		while(ok){
			in();
			sinh();
		}
		printf("\n");
	}
}
