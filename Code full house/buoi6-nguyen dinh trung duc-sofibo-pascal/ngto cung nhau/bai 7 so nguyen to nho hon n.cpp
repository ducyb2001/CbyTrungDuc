/*bai 7 va 8 so nguyen to nho hon n */

#include<stdio.h>
#include<math.h>

int snt(int n){
	int i;
	if(n<2) return 0;
	for(i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}
//bai 7


//int main(){
//	int i,n;
//	scanf("%d", &n);
//	for(i=1;i<=n;i++){
//		if(snt(i)==1) printf("%d\n", i);
//	}
//	return 0;
//}

//bai8


int main(){
	int i,n;
	int count=0;
	scanf("%d", &n);
	for(i=2;count<n;i++){
		if(snt(i)==1) {
		printf("%d\n", i);
		count++;
	}
		
	}
}
