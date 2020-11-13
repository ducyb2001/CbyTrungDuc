/*bai 160 A */
#include<stdio.h>

void xoa(int a[],int n, int x){
	int pos;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			pos=i;
		}
	}
	for(int i=pos;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
}

int find(int a[],int n){
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	int r=sum/2;
	int max,tong=0,cnt=0;
	while(tong<=r){
		max=find(a,n);
		tong+=max;
		xoa(a,n,max);
		n--;
		cnt++;
	}
	printf("%d", cnt);
}
