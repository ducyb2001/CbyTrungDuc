/* bai 476 a */

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
//#include<stdio.h>
//int main(){
//	int n,m,i;
//	scanf("%d%d", &n, &m);
//	int minstep=n/2+n%2;
//	for(int i=minstep; i<=n;i++){
//	if(i%m==0){
//		printf("%d", i);
//		return 0;
//	}
//}
//	printf("-1");
//	return 0;
//}
