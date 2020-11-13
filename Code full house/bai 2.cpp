#include <stdio.h>
int main()
{
	float a, b, c, d, e;
	float Tich, Tong;
	float TBC;
	printf ("\n Nhap 5 so");
	scanf ("%f%f%f%f%f", &a, &b, &c, &d, &e);
	Tong=a+b+c+d+e;
	printf ("\n Tong la: %f", Tong);
	printf ("\n Tich la: %f", (float)(a*b*c*d*e));
	TBC=Tong/5;
	printf ("\n TBC la: %0.3f", TBC);
	return 0;
	}
