#include<stdio.h>
#include<math.h>

long long Dec2Bin(int decimalnumber){
	long long binarynumber=0;
	int p=0;
	while(decimalnumber>0){
		binarynumber+=(decimalnumber%2)*pow(10,p);
		++p;
		decimalnumber/=2;
	}
	return binarynumber;
}

int Bin2Dec(long long binarynumber){
	int decimalnumber=0;
	int p=0;
	while(binarynumber>0){
		decimalnumber+=(binarynumber%10)*pow(2,p);
		binarynumber/=10;
	}
	return decimalnumber;
}



int main(){
	int n;
	scanf("%d",&n);
	int a = Dec2Bin(n);
	printf("%d",a);
}


