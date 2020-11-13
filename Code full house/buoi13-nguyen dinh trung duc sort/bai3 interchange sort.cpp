/*bai 3 interchange sort*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int j,ok,cnt=1;
	for(int i=0;i<n-1;i++){
		ok=0;
		for(j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
				ok=1;
			}
		}
		if(ok==1){
			printf("Buoc %d:",cnt++);
			for(int j=0;j<n;j++){
				printf("%d ",a[j]);
			}
			printf("\n");
		}
	}

}
