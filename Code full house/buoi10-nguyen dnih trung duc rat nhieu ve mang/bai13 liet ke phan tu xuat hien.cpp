/*bai 13 liet ke phan tu xuat hien nhieu hon 1 lan trong mang */
#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		b[i]=1;
	}
	for(int i=0;i<n-1;i++){
		int count=1;
		if(b[i]==1){
			b[i]=0;
			for(int j=i+1;j<n;j++){
				if(a[j]==a[i]){
					count++;
					b[j]=0;
				}
			}
			if(count>1){
				printf("%d ",a[i]);
			}
		}
	}
}
