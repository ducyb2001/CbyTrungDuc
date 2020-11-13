//#include <stdio.h>
//
//void dec2bin(int n) {
//	if (n == 0) {
//		return;
//	}
//	printf("%d", n % 2);
//	dec2bin(n / 2);
//}
//
//int main(void) {
//	int n;
//	printf("Enter n: ");
//	scanf("%d", &n);
//	printf("\n");
//	dec2bin(n);
//}

// dung mang 

//#include<stdio.h>
//int main(){
//	int a[10],n,i;
//	printf("input n=");
//	scanf("%d", &n);
//	
//	for(i=0;n>0;i++){
//		a[i] = n%2;
//		n/=2;
//	}
//	printf("\n n in binary is ");
//	for(i-=1; i>=0; i--){
//		printf("%d", a[i]);
//	}
//}


#include <stdio.h>
 
const int MAX = 100;
 
 
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nPhan tu a[%d] = %d", i, a[i]);
    }
}
 
int TimKiem(int a[], int n, int v){
    for(int i = 0;i < n; ++i){
        if(a[i] == v){
            return i;
        }
    }
    return -1;
}
 
int main(){
    int arr[MAX];
    int n;
    printf("\nNhap so luong phan tu: ");
    do{
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n <= 0 || n > MAX);
    printf("\n======NHAP MANG=====\n");
    NhapMang(arr, n);
    printf("\n======XUAT MANG=====\n");
    XuatMang(arr, n);
    printf("\n======TIM KIEM======\n");
    int v;
    printf("\nNhap vao gia tri can tim: ");
    scanf("%d", &v);
    printf("\nTim thay so %d tai chi so %d!", v, TimKiem(arr, n, v));
}

