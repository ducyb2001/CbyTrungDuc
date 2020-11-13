/*bai 6 492B */

#include<stdio.h>
#include<string.h>

void sx(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
}
int main(){
	int n,l;
	scanf("%d%d",&n,&l);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sx(a,n);
	int max=a[0];
	for(int i=1;i<n;i++){
		int tmp=a[i]-a[i-1];
		if(tmp>max){
			max=tmp;
		}
	}
	int x=l-a[n-1];
	int y=a[0];
	if(x>max){
		max=x;
	}
	else if(y>(double)max/2){
		max=y;
		printf("%.10f",(float)y);
		return 0;
	}
	printf("%.10lf",(double)max/2);
	return 0;
}
