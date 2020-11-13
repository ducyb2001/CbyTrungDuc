/*bai 38 doi cho */

#include<stdio.h>
#include<math.h>
int sochuso(int n){
	int dem=0;
	while (n!=0){
		n/=10;
		dem++;
	}
	return dem-1;
}
//void(doicho(int n))
int (doicho (int n)){
	int temp=n;
	int r;
	int giua;
	int kq;
	int res=n%10;
	while (n>0){
		r=n%10;
		n/=10;
	}
	giua=temp-r*(pow(10, sochuso(temp))) - res;
	kq = giua + r + res*(pow(10, sochuso(temp)));
	return kq;
// printf("%d", kq);
}

int main (){
	int n;
	scanf("%d", &n);
	printf("%d", doicho(n));
	return 0;
}
