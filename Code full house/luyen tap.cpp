//#include <stdio.h>
//#include <math.h>
//#include <conio.h>
//#define PI 3.14159
//int main ()
//{
//	float r, cv, dt;
//	printf("\n Ban kinh r=");
//	scanf("%f", &r); /*nhap du lieu vao theo cau truc do*/
//	cv=2 * M_PI * r; dt=M_PI * r * r;
//	printf("\n Chu vi= %0.6f\n Dien tich= %0.2f", cv, dt); /*0.3 la lay hang thap phan 3 so*/
//	return 0;
//	}
//*********************

//#include <stdio.h>
//#include <conio.h>
//main ()
//{
//	printf("%f", -45.63);
//	}

/*Chuong trinh tich x luy thua y*/

//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//main ()
//{
//	double x, y, z; 
//	printf("\n Nhap x va y:");
//	scanf("%lf%lf", &x, &y);
//	z = pow(x, y);
//	printf("\n z = %0.2lf", z);
//	}

//*******************
/*Bai 2*/
//#include <stdio.h>
//main ()
//{
//	printf("Hello, World! \nTurbo C 2.0");
//	}
/* Bai 3*/
//#include <stdio.h>
//int main ()
//{
//	int a, b, c, d;
//	printf("Nhap 4 so: ");
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	printf("tich cua 4 so la: %d", (a*b*c*d));
//	return 0;
//}
//

/*Bai 4*/
//#include <stdio.h>
//main()
//{
//	int n;
//	float lk1, bl, lk2;
//	printf("\n Nhap so ngay cong:");
//	scanf("%d" ,&n);
//	printf("\n Nhap bac luong");
//	scanf("%f" ,&bl);
//	printf("\n Nhap luong ki truoc");
//	scanf("%f", &lk1);
//	lk2 = (bl * n) / 26 - lk1;
//	printf("\n Luong la: %f", lk2);
//}


/*arithmetic operators*/ 
//#include <stdio.h>
//
//int main()
//{
//	int a,b;
//	printf ("\nNhap a:"); scanf ("%d", &a); 
//	printf ("\nNhap b:"); scanf ("%d", &b); 
//	
//	int sum = a + b;
//	printf ("\n sum %d + %d = %d", a, b, sum);
//	
//	int sub = a - b;
//	printf ("\n sub %d - %d = %d", a, b, sub);
//	
//	int mul = a * b;
//	printf ("\n sum %d + %d = %d", a, b, sum);
//	float div = a /(float) b;
//	printf ("\n sum %d + %d = %d", a, b, sum);
//}

// xuat ma ascii//
//#include <stdio.h>
//int main ()
//{
//	char c;
//	printf ("\nNhap ki tu c: ", &c); scanf ("%c", &c);
//	printf ("\ngia tri cua c la: %c", c);
//	printf ("\ngia tri cua c la: %d", c);
//	printf ("\nc co la ki tu a khong? %d", (c==97));
//}

/* bai tap hoan vi*/

//#include <stdio.h>
//int main ()
//{
//	int a,b;
//	printf ("\nNhap 2 so a, b");
//	scanf ("%d%d", &a, &b);
//	printf ("a=%d ,b=%d", a, b);
//	int temp = a;
//	a = b;
//	b = temp;
//	printf ("b=%d , a=%d", b, a);
//}

/* kiem tra 1 so la so chan hay khong */

//#include <stdio.h>
//int main ()
//{
//	int n;
//	printf ("Nhap so nguyen n:");
//	scanf ("%d", &n);
//	if (n % 2 == 0) 
//	{
//		printf ("\n %d la so chan", n);
//	}
//	else printf ("%d la so le", n);
//}

/* if else if */

//#include <stdio.h>
//int main ()
//{
//	int a,b;
//	printf ("Nhap 2 so a va b:"); 
//	scanf ("%d %d", &a, &b);
//	if (a > b)
//		{printf ("so %d lon hon so %d", a, b);
//		}
//	else if (a==b)
//		{printf ("2 so bang nhau");
//		}
//	else printf ("so %d nho hon so %d", a, b);
//}	

/* Tim xem so do la am chan hay am le, duong chan hay duong le */
//#include <stdio.h>
//int main ()
//{
//	int n;
//	printf ("Nhap so nguyen n");
//	scanf ("%d", &n);
//		if (n>0)
//		{
//		if (n % 2 == 0)
//			{
//			printf ("%d la so duong chan", n);
//			}
//		else printf ("%d la so duong le", n);
//		}
//			else if (n==0) printf ("Day la so 0!");
//		else{
//		 	if (n % 2 == 0) {printf ("%d la so am chan", n);}
//		 	else printf ("%d la so am le", n);
//		}
//		
//}
/* bai tap xep loai hoc sinh */
//
//#include <stdio.h>
//
//#define GIOI "\n Xep loai gioi"
//#define KHA "\nXep loai kha"
//#define TB "\n Xep loai TB"
//#define YEU "\n Xep loai yeu"
//
//int main ()
//
//{
//	float diemToan;
//	float diemVan;
//	float diemAnh;
//	float TBC;
//	printf ("\n Nhap diem toan=");
//	scanf ("%f", &diemToan);
//	printf ("\n Nhap diem van=");
//	scanf ("%f", &diemVan);
//	printf ("\n Nhap diem anh=");
//	scanf ("%f", &diemAnh);
//	TBC = (diemToan + diemVan + diemAnh) / 3;
//	printf ("Diem TBC cua 3 mon la: %.2f", TBC);
//	if (TBC < 4){
//		printf (YEU);
//	}
//	else if (TBC < 6,5){
//		printf (TB);
//	}
//	else if (TBC < 8){
//		printf (KHA);
//	}
//	else printf (GIOI);
//}

/* tinh tong cac so trong [a,b] */
//
//#include <stdio.h>
//int main (){
//	int a,b, i;
//	int sum = 0;
//	
//	printf ("Nhap a");
//    scanf ("%d", &a);
//    printf ("Nhap b");
//    scanf ("%d", &b);
//		
//	for (i = a; i <= b; i++){ 
//		sum += i;
//	}
//	printf ("Sum = %d", sum );
//}

/*ve hinh vuong*/
//#include <stdio.h>
//int main(){
//
//int n;
//printf("nhap gia tri cua canh hinh vuong: "); scanf("%d", &n);
//if (n > 0 && n < 10)
//{
//for(int i = 1; i <= n ; i++) 
//{
//for(int j = 1; j <= n; j++) 
//{
//printf(" * ");
//}
//printf("\n"); 
//}
//}
//}

///*ve hinh tam giac deu va 4 kieu tam giac vuong tai 4 goc phan tu */
//
#include <stdio.h>
int main (){
	int i, j, n;
	scanf ("%d", &n);
	printf ("ve tam giac deu %d canh\n", n);
	for (i=0; i<=n; i++ ){
		for (j=1; j <= n-i; j++){
		printf (" ");
	}
		for (j=1; j<=i; j++){
		printf ("* ");
		}
		printf ("\n");
	}	
}

/* ve tam giac can voi do dai 2 canh la a va b  */

//#include <stdio.h>
//int main ()
//{
//	int i, j,k, n;
//	printf ("nhap chieu cao:");
//	scanf ("%d", &n);
//	for (i=1; i <= n; i++){
//		for (j=1; j <= n-i; j++){
//			printf (" ");}
//		for (j=1; j <= k; j++){
//			printf (" *");}
//			printf ("\n");
//		k += 1;
//		}
//}

//#include <stdio.h>
//int main()
//{
//    int n; int q = 0;
//    printf("Chuong trinh nay se in ra tam giac can\n");
//    printf("Nhap chieu cao tam giac cua ban: \n");
//    scanf("%d",&n);
//
//    while (n > 0)
//    {
//        for (int i = 1; i<n; i++)
//            printf("%c", ' ');
//        for (int k = 0; k <= q; k ++)
//            printf("%c", '*');
//        n -- ;
//        q += 2 ;
//        printf("\n");
//    }
//
//    return 0;
//
//} 


/*in bang cuu chuong */

//#include <stdio.h>
//int main ()
//{
//	int i, j;
//	printf ("\t Bang Cuu Chuong");
//	for (i=1; i <= 10; i++){
//		printf ("\n");
//	for (j=1; j<=10; j++){
//		printf ("%d * %d = %d\t", j, i, j*i );
//	}
//	}
//}

/* tinh tong cac so chan */
//
//#include <stdio.h>
//int main ()
//
//{
//	int a, b;
//	int sum=0;
//	printf ("Nhap A:");
//	scanf ("%d", &a);
//	
//	printf ("Nhap B:");
//	scanf ("%d", &b);
//	if (a > b) {
//	printf ("Khong hop le!");}
//	else{
//	for (int i = a; i <= b; i++) {
//		if (i % 2 == 0) sum += i;
//		printf ("Sum = %d", sum);}
//	}
//}

/* xet mot nam la nam nhuan hay khong */ 

//#include <stdio.h>
//int main ()
//{
//	int n;
//	printf ("nhap nam can xet");
//	scanf ("%d", &n);
//	if (n % 4 == 0 && n % 100 != 0) {
//		printf ("Day la nam nhuan");
//	}
//	else if (n % 400 ==0){
//		printf ("Day la nam nhuan");
//	}
//	else printf ("Day khong phai nam nhuan");
//	return 0;
//}
/* tu 1 den n co cac so nguyen to la */
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
//	scanf ("%d", &n);
//	for (i = 1; i<=n; i++) if (check (i)) printf ("%d", i);
//	return 0;
//}

/* nhap ra cac so le tu 1 den n */
//#include <stdio.h>
//int main ()
//{
//	int i, n,a, count;
//	count = 0;
//	printf ("input n= ", n);
//	scanf ("%d", &n);
//	printf ("cac so le tu 1 den n la:", n);
//	for (i=1; i<=n; i++){
//		a = i%2;
//		if (a!=0){
//			printf ("%4d", i);
//			count ++;
//		}
//}
//printf ("\n So cac so le tu 1 den n la: %d", count);
//return 0;
//}

/* xet tinh chan le va tinh tong cac chu so  */
//#include <stdio.h>
//int check (int n){
//	if (n%2==0) return 1;
//	else return 0;
//}
//int sumDigit (int n)
//{
//	int sum=0;
//	while (n!=0){
//		sum += n%10;
//		n/=10;
//	}
//	return sum;
//}
//int main ()
//{
//	int n;
//	printf ("input n=");
//	scanf ("%d", &n);
//	if (check(n)==1) printf ("even");
//	else printf ("odd");
//	printf ("\nsum of all digit in %d = %d", n, sumDigit (n));
//	return 0;
//}

/*day so fibonacci*/

//#include<stdio.h>
//int main ()
//{
//	int n, n1 = 0, n2 = 1, n3, i;
//	printf ("\n Input n:");
//	scanf ("%d", &n);
//	if (n<=0) printf ("khong co gia tri");
//	else {
//	printf ("%d %d", n1, n2);
//	for (i=2; i < n; i++){
//		n3 = n1+n2;
//		printf (" %d", n3);
//		n1 = n2;
//		n2 = n3;
//	}
//}
//	return 0;
//}
