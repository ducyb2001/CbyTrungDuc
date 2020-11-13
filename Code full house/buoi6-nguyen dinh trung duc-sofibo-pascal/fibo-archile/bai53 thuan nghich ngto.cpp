/*bai 53 so thuan nghich nguyen to */

#include<stdio.h>
#include<math.h>

int nto(int n){
	int i;
	if (n<2) return 0;
	for(i=2; i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int daoNguoc(int n){
	int res=0;
	int temp=n;
	if(n>9){
	while(n){
		res=res*10+n%10;
		n/=10;
	}
}
	
	if(nto(res)&&temp!=res) return 1;
	else return 0;
}

int main(){
	int i,a,b;
	scanf("%d %d", &a, &b);
	for(i=a;i<=b;i++){
		if (nto(i)&&daoNguoc(i)) printf("%d ", i);
	}
}
