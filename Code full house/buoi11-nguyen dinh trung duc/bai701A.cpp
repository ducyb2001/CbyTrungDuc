/*bai 701A*/
/*sai o test 7*/
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n],c[n];
	int u=n/2;
	int tong=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		tong+=a[i];
		b[i]=1;
	}
	int cnt=0;
	for(int i=0;i<n-1;i++){
		if(b[i]){
			c[cnt]=i;
			cnt++;
			for(int j=i+1;j<n;j++){
				if(a[i]+a[j]==tong/u){
					b[j]=0;
					c[cnt]=j;
					cnt++;
					break;
				}
			}
		}
	}
	int dem=0;
	for(int i=0;i<u;i++){
		for(int j=0;j<2;j++){
			printf("%d ",c[dem]+1);
			dem++;
		}
		printf("\n");
	}
}

