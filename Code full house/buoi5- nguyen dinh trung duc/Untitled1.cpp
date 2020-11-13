#include<stdio.h>
#include<math.h>
//void pt(int n){
//	for(int i=2;i<=sqrt(n);i++){
//		while (n%i==0){
//			printf("%d ", i);
//			n/=i;
//		}
//	}
//	if (n!=1) printf("%d ", n);
//}
//
//int uocnt(int n){
//	int dem=0;
//	for (int i=2; i<=sqrt (n);i++){
//		if(n%i==0) {
//		dem++;
//		while(n%i==0){
//			n/=i;
//		}
//	}
//	}
//	if (n!=1) dem++;
//	if (dem>=3) return 1;
//	return 0;
//}

//int tonguoc(int n){
//	int sum=0;
//	for(int i=1;i<=sqrt(n);i++){
//		if(n%i==0){
//			sum+=i;
//			sum+=n/i;
//		}
//	}
//	int can=sqrt(n);
//	if(can*can==n){
//		sum-=can;
//	}
//	return sum;
//}
//
//int main(){
//	printf("%d", tonguoc(64) );
//}

// thuat toan euclid

int gcd(int a, int b){
	if (a==0 || b==0){
		return a+b;
	}
	while(a!=b){
		if(a>b){
			a-=b;
		}
		else{
			b-=a;
		}
	}
	return a;
}

int lcm (int a, int b){
	return (a*b/gcd(a,b));
}
