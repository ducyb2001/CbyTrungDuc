/*bai 677A*/

#include<stdio.h>
int main(){
	int n,h;
	scanf("%d%d",&n,&h);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]>h){
			sum+=2;
		}
		else sum+=1;
	}
	printf("%d",sum);
}
