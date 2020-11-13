/*bai 12 dem so luong chu so phan biet trong mang 1 chieu */

#include<stdio.h>
bool check(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
        if (a[i] == k)
            return true;
    return false;
}
 
int DemPhanBiet(int a[], int n)
{
    if (n == 1)
        return 1;
 
    int dem = DemPhanBiet(a, n-1);
    if (check(a, n-1, a[n-1]) == true)
        return dem;
    else
        return dem + 1;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",DemPhanBiet(a,n));
}
