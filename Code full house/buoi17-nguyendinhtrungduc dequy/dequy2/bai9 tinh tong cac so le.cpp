/*bai 9 tinh tong cac so le trong mang */

#include<stdio.h>

int tong(int a[],int i){
	if(i==-1){
		return 0;
	}
	else{
		if(a[i]%2==1) return a[i] + tong(a,i-1);
		else return tong(a,i-1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b=tong(a,n-1);
	printf("%d",b);
	
}
