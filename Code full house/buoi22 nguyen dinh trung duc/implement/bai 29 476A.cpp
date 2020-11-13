/*bai 29 476A*/


#include<stdio.h>
int main(){
	int i,m,n;
	scanf("%d %d", &n, &m);
	if(n<m) printf("-1");
	for(i=m;i<=n;i+=m){
	if(i>=n/2+n%2 && i%m==0){
		printf("%d", i);
		return 0;
	}
}
	return 0;
}
