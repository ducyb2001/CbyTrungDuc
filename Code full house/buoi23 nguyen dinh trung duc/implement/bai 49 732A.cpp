/*bai 49 732A */

#include<stdio.h>

int check(int n, int k){
	int r=n%10;
	if(r==k) return 1;
	return 0;
	
}
int main(){
	int k,r;
	scanf("%d%d",&k,&r);
	k=k%10;
	int i,sum;
	for(i=1;;i++){
		sum = i*k%10;
		if(sum==r||sum==0) break;
	}
	printf("%d",i);
}

