/*bai 69A*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int m=3;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum+=a[j][i];
		}
		if(sum!=0){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
