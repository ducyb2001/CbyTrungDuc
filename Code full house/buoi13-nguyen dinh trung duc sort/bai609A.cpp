/*bai 609 A */

#include<stdio.h>
void sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i]){
				int tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,n);
	int sum=0,cnt=0;;
	for(int i=0;i<n;i++){
		sum+=a[i];
		cnt++;
		if(sum>=m){
			printf("%d",cnt);
			return 0;
		}
	}
}
