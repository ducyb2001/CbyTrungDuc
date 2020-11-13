/* tim nghiem cua phuong trinh bac 2 */ 

#include <stdio.h>
#include <math.h>
int main ()
{
	float a, b, c, delta, x1, x2, x3;
	printf ("nhap a");
	scanf ("%f", &a);
	printf ("nhap b");
	scanf ("%f", &b);
	printf ("nhap c");
	scanf ("%f", &c);
	delta = b*b - 4*a*c;
	x1 = (-b + sqrt (delta)) / (2*a);
	x2 = (-b - sqrt (delta)) / (2*a);
	x3 = -b / (2*a);
	
	
	if (a == 0) {
		if (b == 0)
		{
		if (c == 0) printf ("Pt co vo so nghiem");
		else printf ("PT vo nghiem");
		}
		else printf ("Phuong trinh co 1 nghiem duy nhat la %f", -c/b);
		}
	else 
	if (delta < 0) printf ("PT vo nghiem");
	else if (delta = 0){
	printf ("Phuong trinh co mot nghiem duy nhat %f", x3);
	} 
	else {
	printf ("\n Phuong trinh co nghiem x1 la %.2f", x1);
	printf ("\n Phuong trinh co nghiem x2 la %.2f", x2);
		}	
}
