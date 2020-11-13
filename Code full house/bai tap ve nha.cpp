/* bai 1 cach 1*/

#include<stdio.h>
#include <math.h>
int main()
{
	int i, a, count = 0, b; 
	printf( "Nhap so a la:" ); 
	scanf( "%d", &a ); 
	if (a < 0){
		printf ("khong co gia tri");
	}
	else {
	for( i=2; i <= a; i++ )
	{
		count = 0;
		for( b=1; b<=a; b++)
		if( i % b == 0)
				count++;

		if( count == 2 )
		{
			printf( "%4d", i );
		}
		
	}
}
	return 0;
}

/*bai 1 cach 2*/
//
//#include <stdio.h>
//int check (int a)
//{
//	int i, count;
//	count = 0;
//	for (i = 1; i < a; i++){
//		if (a%i == 0) count ++;
//	}
//	if (count == 1) return 1;
//	else return 0;
//}
//int main ()
//{
//	int n, i;
//	printf ("\nNhap n");
//	scanf ("%d", &n);
//	if (n<=1){
//		printf ("Khong co gia tri");
//			}
//	else {
//	printf("\nCac so nguyen to la:");
//	for (i = 1; i<=n; i++) if (check (i)) printf ("%4d", i);
//	return 0;
//		}
//}

/* bai 2 */
//#include <stdio.h>
//int check (int a)
//{
//	int i, count;
//	count = 0;
//	for (i = 1; i < a; i++){
//		if (a%i == 0) count ++;
//	}
//	if (count == 1) return 1;
//	else return 0;
//}
//int main ()
//{
//	int n, i, count=0;
//	printf ("Nhap so cac so nguyen to dau tien la:");
//	scanf ("%d", &n);
//	if (n<0) {
//		printf ("khong co gia tri");
//			}
//	else{
//	printf("%d so nguyen to dau tien la: \n", n);
//    for (int i=2;count<n;i++)
//        if (check(i)==true)
//        {
//            printf("%d ",i);
//            count++;
//        }
//		}		
//}
