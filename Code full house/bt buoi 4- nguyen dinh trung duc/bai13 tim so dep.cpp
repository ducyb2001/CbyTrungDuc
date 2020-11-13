#include<stdio.h>
#include<math.h>
int palin(int i){
	int r, sum=0;
	int temp=i;
	while (i>0){
	r=i%10;
	sum=(sum*10)+r;
	i/=10;
}
if (temp==sum) return 1;
return 0;
}

int snt(int n){
	int i;
	int count=0;
	for (i=2; i<=sqrt(n) ; i++){
		if (n%i==0) return 0 ;
	}
	return 1;
}

int check (int n){
	int i;
	int count=0;
	for (i=2; i<=n; i++){
		if (n%i==0 && snt(i)==1) count ++;
	}
	if (count>=3) return 1;
	return 0;
}
int main(){
	int i,a,b;
	scanf ("%d%d", &a,&b);
	for (i=a; i<=b; i++){
		if (palin(i)==1 && check(i)==1) printf("%d ", i);
	}
	return 0;
}
