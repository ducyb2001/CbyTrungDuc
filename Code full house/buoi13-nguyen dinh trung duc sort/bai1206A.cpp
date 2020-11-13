/*bai 451B*/

#include<stdio.h>
int check(int a[],int n, int x){
	for(int i=0;i<n;i++){
		if(a[i]==x){
			 return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int m;
	scanf("%d",&m);
	int b[m];
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	int c[n+m];
	for(int i=0;i<n;i++){
		c[i]=a[i];
	}
	for(int i=n;i<m+n;i++){
		c[i]=b[i-n];
	}
	int tg;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			tg=a[i]+b[j];
			if(check(c,m+n,tg)){
				printf("%d %d",a[i],b[j]);
				return 0;
			}
		}
	}
}
