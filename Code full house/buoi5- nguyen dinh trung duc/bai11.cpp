//#include<stdio.h>
//#include<math.h>
//int uoc(int n){
//	int i;
//	int x=sqrt(n);
//	int count=0;
//	for(i=1; i<=sqrt(n); i++){
//		if (n%i==0){
//			count++;
//		}
//	}
//	if (x*x==n) return count*2-1;
//	else return count*2;
//}
//
//int main(){
//	int n;
//	scanf("%d", &n);
//	if(uoc(n)==3) printf("yes");
//	else printf("no");
//}

#include<stdio.h>
#include<math.h>
int nto(int n){
	int i;
	if (n<2) return 0;
	for(i=2; i<sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int check(int n){
	int x;
	x=sqrt(n);
	if ((x*x==n) && nto(n)) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	if (check(n)) printf("yes");
	else printf("no");
}
