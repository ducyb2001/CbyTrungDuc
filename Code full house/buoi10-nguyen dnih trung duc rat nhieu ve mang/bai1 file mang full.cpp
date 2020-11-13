/*bai1*/

//INPUT
//4
//1 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16
//OUTPUT
//29

#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(nt(a[i][j])){
				sum+=a[i][j];
			}
		}
	}
	printf("%d", sum);
}
