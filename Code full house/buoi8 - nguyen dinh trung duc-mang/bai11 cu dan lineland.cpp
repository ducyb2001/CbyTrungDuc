/* bai 11 thanh pho Line Land */

#include<stdio.h>

int min(int a, int b){
	if(a<b) return a;
	return b;
}

int max(int a, int b){
	if(a>b) return a;
	return b;
}

int main(){
	int i,n;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n;i++){
		scanf("%d",&a[i]);
	}s
	for(i=0;i<n;i++){
	if(i==0){
		printf("%d %d\n", a[1]-a[0], a[n-1]-a[0]);
	}
	else if(i==n-1){
		printf("%d %d\n", a[n-1]-a[n-2], a[n-1]-a[0]);
	}
	else printf("%d %d\n", min(a[i]-a[i-1], a[i+1]-a[i]), max(a[i]-a[0],a[n-1]-a[i]));
}
}
