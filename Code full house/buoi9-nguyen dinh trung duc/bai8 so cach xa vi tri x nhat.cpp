#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int x,res,c;
	scanf("%d", &x);
	int m1=-1e9;
	for(int i=0; i<n;i++){
		if(abs(a[i]-x)>m1){
			m1=abs(a[i]-x);
			res=a[i];
			c=i;
		}
	}
	printf("%d",res); 
}
