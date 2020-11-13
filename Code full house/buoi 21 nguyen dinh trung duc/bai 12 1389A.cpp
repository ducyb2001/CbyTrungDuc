/* bai 12 1389A*/
#include<stdio.h>
int main() {
    int T;
    scanf("%d",&T);
    while(T--) {
        int l,r;
        scanf("%d%d",&l,&r);
        if(l*2>r){
        	printf("-1 -1\n");
		}
        else printf("%d %d\n",l, l*2);
    }
    return 0;
}
