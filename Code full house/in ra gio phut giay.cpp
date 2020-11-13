/*nhap vao so nguyen n, in ra gio phut giay */

//#include <stdio.h>
//int main (){
//	int n, gio, phut, giay;
//	scanf ("%d", &n);
//	gio = n/3600;
//	phut = (n - gio*3600) / 60;
//	giay = (n- gio*3600) % 60;
//	printf ("%d gio %d phut %d giay", gio, phut, giay);
//	return 0;
//}
	
/*nhap so tien va tinh cac loai to tien sao cho it nhat */

#include <stdio.h>
int main(){
	int n;
	int to500, to200, to100, to50, to20, to10, to5, to2, to1;
	printf ("Nhap so tien can doi:");
	scanf ("%d", &n);
	to500=n/500;
	n=n-500*to500;
	to200=n/200;
	n=n-200*to200;
	to100=n/100;
	n=n-100*to100;
	to50=n/50;
	n=n-50*to50;
	to20=n/20;
	n=n-20*to20;
	to10=n/10;
	n=n-to10*10;
	to5=n/5;
	n=n-to5*5;
	to2=n/2;
	n=n-to2*2;	
	printf ("\nSo to tien 500 nghin la %d", to500);
	printf ("\nSo to tien 200 nghin la %d", to200);
	printf ("\nSo to tien 100 nghin la %d", to100);
	printf ("\nSo to tien 50 nghin la %d", to50);
	printf ("\nSo to tien 20 nghin la %d", to20);
	printf ("\nSo to tien 10 nghin la %d", to10);
	printf ("\nSo to tien 5 nghin la %d", to5);
	printf ("\nSo to tien 2 nghin la %d", to2);
	printf ("\nSo to tien 1 nghin la %d", n);
	return 0;
}
