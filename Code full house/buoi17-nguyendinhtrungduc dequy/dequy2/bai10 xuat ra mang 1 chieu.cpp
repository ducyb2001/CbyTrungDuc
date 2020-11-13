/*bai 10 viet ham xuat ra mang 1 chieu */

#include<stdio.h>
void xuatMang(int A[], int n, int i = 0){
    if(i == n)
        return;
    printf("%d ", A[i]);
    xuatMang(A, n, i + 1);
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n]; 
    for(int i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
    xuatMang(a, n);
    printf("\n");
    return 0;
}
