//#include<stdio.h>
//#include<math.h>
//
//int nt(int n){
//	int i;
//	if(n<2) return 0;
//	for(i=2;i<=sqrt(n);i++){
//		if (n%i==0) return 0;
//	}
//	return 1;
//}
//
//int main(){
//	int n,i;
//	int count;
//	scanf("%d", &n);
//	for(i=2; i<=n; i++){
//			count=0;
//			while(nt(i)&&(n%i==0)){
//				count++;
//				n/=i;
//			}
//	if (n!=i && count !=0){
//		printf("%d(%d)", i, count);
//	}
//}
//	return 0;
//}
//

#include<stdio.h>
#include<math.h>

int main(){
	int i,n;
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++){
		int count=0;
		while(n%i==0){
			count++;
			n/=i;
		}
		if(count!=0) printf("%d(%d) ",i, count);
	}
	if(n>1) printf("%d(1)", n);
	return 0;
}
