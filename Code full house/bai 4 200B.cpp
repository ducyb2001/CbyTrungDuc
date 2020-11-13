/*bai 4 200B */

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int tg=0;
	for(int i=1;i<=n;i++){
		int x;
		scanf("%d",&x);
		tg+=x;
	}
	printf("%f",1.*tg*100 / (100*n));
}
