/*bai 39 1283A */

#include <stdio.h>
 
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
