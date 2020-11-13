/*bai 6 dem so luong chu so chan trong mang */
#include<stdio.h>
int dem(int a[],int i)
{
    if(i==(-1)) return 0;
    else
    {
        if(a[i]%2==0) return 1 + dem(a, i-1);
        else return dem(a, i-1);
    }
}
 
int main()
{
	int i;
    int n;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
    	scanf("%d",&a[i]);
	}
    printf("%d", dem(a, n-1));
    return 0;
}
