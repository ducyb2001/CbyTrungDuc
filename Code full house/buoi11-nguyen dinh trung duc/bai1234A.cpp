/*bai 1234A*/
/*da check dung*/
#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		int n;
		scanf("%d", &n);
		int a[n];
		int sum=0;
		for(int j=0;j<n;j++){
			scanf("%d", &a[j]);
			sum+=a[j];
		}
		int c=sum/n;
		if((c*n)<sum){
			c++;
		}
		printf("%d\n", c);
	}
	return 0;
}
