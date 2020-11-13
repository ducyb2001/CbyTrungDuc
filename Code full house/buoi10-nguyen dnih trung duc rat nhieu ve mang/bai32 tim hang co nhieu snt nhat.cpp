/*bai 32 tim hang co nhieu snt nhat */
#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int main(){
	int i,n;
	scanf("%d", &n);
	int a[n][n];
	for(i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int max=0,index;
	for(i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<n;j++){
			if(nt(a[i][j])){
				cnt++;
			}
		}
		if(cnt>max){
			max=cnt;
			index=i;
		}
	}
	printf("%d\n",index+1);
	for(int i=0;i<n;i++){
		if(i==index){
			for(int j=0;j<n;j++){
				if(nt(a[i][j]))
				printf("%d ",a[i][j]);
			}
		}
	}
}
