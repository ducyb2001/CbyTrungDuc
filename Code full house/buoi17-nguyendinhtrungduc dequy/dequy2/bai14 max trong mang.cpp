/* bai 14 tim so lon nhat trong mang 1 chieu */

#include<stdio.h>
int max(int a[], int n)
{
    if (n == 1)
        return a[0];
    int temp = max(a, n-1);
    if (temp > a[n-1])
        return temp;
    else
        return a[n-1];
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",max(a,n));
}
