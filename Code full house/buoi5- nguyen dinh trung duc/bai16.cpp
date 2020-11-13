#include<stdio.h>
#include<math.h>

int nto(int n){
	int i;
	if (n<2) return 0;
	for(i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int sphenic(int n){
	int i;
	int count;
	for(i=2;i<=sqrt(n);i++){
		count=0;
		while(nto(i)&&n%i==0){
			count++;
			n/=i;
		}
		if(count>1) return 0; 
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	if(sphenic(n)) printf("1");
	else printf("0");
}
