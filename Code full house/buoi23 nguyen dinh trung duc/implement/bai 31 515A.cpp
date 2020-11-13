/*bai 31 515A */

#include<stdio.h>
#include<math.h>
int main(){
	int a,b,n;
	scanf("%d%d%d",&a,&b,&n);
	a=abs(a);
	b=abs(b);
	if((a+b<n) && a==0 && b==0 && n%2==0){
		printf("Yes");
		return 0;
	}
	else if(a+b==n){
		printf("Yes");
	}
	else if(a+b<n){
		if((n-a-b)%2==0){
			printf("Yes");
		}
		else printf("No");
	}
	else if(n%(a+b)==0){
		printf("Yes");
	}
	else printf("No");
}
