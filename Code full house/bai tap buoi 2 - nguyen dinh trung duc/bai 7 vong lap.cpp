/*bai 7*/
#include<stdio.h>
int main (){
	int i,n; 
	int sum =0;
	scanf ("%d", &n);
	for (i=2;i<=2*n;i+=2){
		sum += i;
	}
	printf ("%d",sum);	
}
