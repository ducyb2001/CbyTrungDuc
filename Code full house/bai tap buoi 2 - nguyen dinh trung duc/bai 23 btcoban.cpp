/*bai 23 part 2 em tu them cai tinh so cac so nghiem cua no*/
#include <stdio.h>
int main (){
	int i,n;
	int count=0;
	int sum=0;
	scanf("%d",&n);
	for (i=1; i<=n;i++){
		if (n%i==0){ 
		count ++;
		printf ("%3d",i);
		sum += i;
		}
	}
	printf ("\n%3d", count);
	printf ("\n%3d", sum);
	return 0;
}
