/* bai 588 A*/
/*da check dung*/
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	int sum=0,index,min=1e9;
	for(int i=0;i<n;i++){
		if(b[i]<min){
			min=b[i];
		}
		sum+=min*a[i];
	}
	printf("%d", sum);
}
