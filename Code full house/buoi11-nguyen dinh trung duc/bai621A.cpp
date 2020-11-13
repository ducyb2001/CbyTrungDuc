/*bai621A*/
/*run time limit*/
#include<stdio.h>
#define ll long long

void bubble(ll a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=a[j];
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	ll a[n];
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	ll sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	bubble(a,n);
	int pos;
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			pos=i;
			break;
		}
	}
	if(sum%2==0){
		printf("%lld",sum);
	}
	else if(sum%2!=0){
		printf("%lld",sum-a[pos]);
	}
}
