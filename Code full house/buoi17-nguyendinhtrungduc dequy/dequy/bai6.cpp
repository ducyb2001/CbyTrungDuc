/*bai 6 in so dao nguoc */

#include<stdio.h>
#include<math.h>
int scs(int n){
	if(n<10) return 1;
	else return 1+scs(n/10);
}
int daonguoc(int n){
	if(n>0){
		return (n%10)*pow(10,scs(n)-1)+daonguoc(n/10);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a=daonguoc(n);
	printf("%d",a);
}


