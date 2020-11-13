/*1283A lam lai */

#include <stdio.h>
 
int min(int a,int b){
	if(a<b)
		return a;
	return b;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int h,m;
		scanf("%d%d",&h,&m);
		printf("%d\n",1440-h*60-m);
	}
	return 0;
}
