#include <stdio.h>
#include <math.h>
#include <conio.h>
int main ()
{
	int a, b, c, d, e;
	int Tich, Tong;
	float TBC;
	printf (" \n nhap 5 so a, b, c, d, e");
	scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
	Tong = (int)(a+b+c+d+e);
	printf ("\n Tong la: %d", Tong);
	TBC = (float)(a+b+c+d+e)/5;
	printf (" \ntrung binh cong cua 5 so la: %f", TBC);
	Tich = (int)(a*b*c*d*e);
	printf (" \n tich la: %d", Tich);
	return 0;
	}
	
