/*bai 34 935A*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int cnt=0;
	for(int i=1;i<=(n/2);i++){
		if((n-i)%i==0){
			cnt++;
		}
	}
	printf("%d",cnt);
}
