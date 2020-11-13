/*bai 6*/

#include <stdio.h>
int main(){
	int i,n,sum;
	int sum1=0, sum2=0; 
	scanf ("%d", &n);
	if (n%2==0){
		for (i=2;i<=n;i+=2){
			sum1+=i;
		}
		for (i=1;i<=n-1;i+=2){
			sum2+=i;
		}
		sum=sum1-sum2;
	}
	if (n%2!=0){
		for (i=2;i<=n-1;i+=2){
			sum1+=i;
		}
		for (i=1;i<=n;i+=2){
			sum2+=i;
		}
		sum=sum1-sum2;
	}
	printf ("%d",sum);
}
