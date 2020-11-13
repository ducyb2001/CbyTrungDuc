/* bai 8 va 14 loai bo hang va cot */

#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d", &n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int max=-1e9,k,l;
	for(int i=0;i<n;i++){
		int s=0;
		for(int j=0;j<m;j++){
			s+=a[i][j];
		}
		if(s>max){
			max=s;
			k=i;
		}
	}
	int max2=-1e9;
	for(int i=0;i<n;i++){
		int s=0;
		for(int j=0;j<m;j++){
			s+=a[j][i];
		}
		if(s>max2){
			max2=s;
			l=i;
		}
	}
	for(int i=0;i<n;i++){
		if(i!=k){
			for(int j=0;j<m;j++){
				if(j!=l){
					printf("%d ", a[i][j]);
				}
			}
			printf("\n");
		}
	}
}
