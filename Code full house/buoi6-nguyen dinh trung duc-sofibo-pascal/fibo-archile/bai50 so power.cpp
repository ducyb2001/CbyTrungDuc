/* so powerful */

//#include<stdio.h>
//#include<math.h>
//
//int nto(int n){
//	int i;
//	if(n<2) return 0;
//	for (i=2; i<=sqrt(n); i++){
//		if (n%i==0) return 0;
//	}
//	return 1;
//}
//
//int check(int n){
//	int i;
//	for(i=1;i<=n/2;i++){
//		if (nto(i)==1 && n%i==0){
//			if(n%(i*i)==0)
//			return 1;
//		}
//	}
//	return 0;
//}
//
int max(int a, int b){
	int max=a;
	if (a<b) max=b;
	return max;
}

int min(int a, int b){
	int min=a;
	if(a>b) min=b;
	return min;
}
//int main(){
//	int a,b,i;
//	scanf("%d %d", &a, &b);
//	for (i=min(a,b);i<=max(a,b); i++){
//		if(check(i)==1) printf("%d ", i);
//	}
//}

#include<stdio.h>
#include<math.h>
int sodep(int n){
	int temp=n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(temp%(i*i)==0) return 1;
			while(n%i==0){
				n/=i;
			}
		}
	}
	if(n>1){
		if(temp%(n*n)==0) return 1;
	}
	return 0;
}
int main(){
	int a,b,i;
	scanf("%d %d", &a, &b);
	for (i=min(a,b);i<=max(a,b); i++){
		if(sodep(i)==1) printf("%d ", i);
	}
}
