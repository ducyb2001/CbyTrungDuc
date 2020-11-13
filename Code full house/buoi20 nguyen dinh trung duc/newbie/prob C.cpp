/*problem C*/

#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	float tbc=(float)sum/n;
	int kq=0;
	for(int i=0;i<n;i++){
		if(a[i]>tbc){
			kq+=a[i];
		}
	}
	if(kq==0){
		printf("-1");
		return 0;
	}
	printf("%d",kq);
}
