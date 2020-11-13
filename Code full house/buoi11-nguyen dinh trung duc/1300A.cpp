/*1300A*/
/*da accept*/
#include<stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		int a[n],sum=0,solan=0;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]==0){
				a[i]+=1;
				solan++;
			}
		}
		for(int i=0;i<n;i++){
			sum+=a[i];
		}
		if(sum==0) solan++;
		printf("%d\n",solan);
	}
}
