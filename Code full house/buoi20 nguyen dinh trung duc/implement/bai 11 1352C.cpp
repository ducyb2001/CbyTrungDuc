/* bai 11 1352 C */
#include<stdio.h>
#include<math.h>
int so(int n, int k){
	return (k + floor(k - 1) / (n - 1));
}
  
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n,k;
		scanf("%d%d",&n,&k);
		printf("%d\n", so(n, k)); 
	}
    return 0;
} 
