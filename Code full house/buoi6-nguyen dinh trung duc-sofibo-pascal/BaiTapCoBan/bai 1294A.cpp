#include <stdio.h>
#include <math.h>
/*di copy */

//int solve(int a,int b,int c,int n){
//	if((a+b+c+n)%3!=0){
//		return 0;
//	}
//	int thuong=(a+b+c+n)/3;
//	if(thuong>=a&&thuong>=b&&thuong>=c)
//		return 1;
//	return 0;
//}
// 
//int main(){
//	int T;
//	scanf("%d",&T);
//	while(T--){
//		int a,b,c,n;
//		scanf("%d%d%d%d",&a,&b,&c,&n);
//		if(solve(a,b,c,n))
//			printf("YES\n");
//		else
//			printf("NO\n");
//		//T--;
//	}
//	return 0;
//}

int solve(int a, int b, int c, int n){
	if((a+b+c+n)%3!=0) return 0;
	int thuong=(a+b+c+n)/3;
	if(thuong>=a && thuong >=b && thuong >=c) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a,b,c,n;
		scanf("%d%d%d%d", &a,&b,&c,&n);
		if(solve(a,b,c,n)==1) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
