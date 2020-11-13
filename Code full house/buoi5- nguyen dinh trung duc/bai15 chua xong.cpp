/*bai15 in ra uoc so nguyen to lon nhat */

#include<stdio.h>
#include<math.h>

int uocnto(int n){
	int i;
	int max=0;
	if(n<2) return 0;
	for(i=2; i<=sqrt(n); i++){
		while (n%i==0){
			n/=i;
			max=i;
		}
	}
	if(n>1) max=n;
	return max;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", uocnto(n));
}

