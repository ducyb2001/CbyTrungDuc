/*bai 30 822A*/

#include <stdio.h>
int min(int a, int b){
	if(a<b) return a;
	return b;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x = min(a,b);
    long long kq = 1;
    for(int i=1;i<=x;i++)
        kq = kq*(long long)i;
    printf("%d",kq);
    return 0;
}
