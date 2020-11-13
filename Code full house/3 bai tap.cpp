/*bai 1: xem dieu kien tam giac roi tinh chu vi va dien tich cua no*/
// #include <stdio.h> 
// #include <math.h>
// main ()
// {
//	float a, b, c, cv, dt, p;
//	printf ("nhap 3 canh cua tam giac:");
//	scanf ("%f%f%f", &a, &b, &c);
//		cv = a + b +c;
//		p = cv/2;
//		dt = sqrt (p * (p-a) * (p-b) * (p-c));
//			if (a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a)
//			{
//			printf ("Do la hinh tam giac");
//			printf("%f", cv);
//			printf ("%f", dt);
//			}
//			else
//			printf ("Do khong phai la hinh tam giac");
//	
//}	
 
/*bai 2: tinh giai thua cua mot so*/
#include <stdio.h>
#include <math.h>
int main ()
	{
		double i,n;
		double fact = 1;
		printf ("Nhap so n:");
		scanf("%lf", &n);
		if (n < 0) printf ("Khong co giai thua");
		else {
			for (i=1; i<=n; i++)
			{
			fact = fact *i;
			}
		printf ("\n Gia tri cua %.1lf! la %0.2lf", n, fact);
	}
	}

/*bai 3: kiem tra so nguyen n co bao nhieu so le */
//#include <stdio.h>
//int main ()
//{
//	int n,t;
//	printf ("Nhap so nguyen N");
//	scanf ("%d", &n);
//	t = ((n-1) / 2) +1;
//	printf ("Tu 1 den %d co %d so le", n,t);
//	}

//#include <stdio.h>
//main ()
//{
//	int n, i, t;
//	printf ("Nhap so nguyen N");
//	scanf ("%d", &n);
//	for (i=1; i<=n; i++)
//	{
//		if (i % 2 != 0)
//	printf ("\t %d",i);
//	}
//	return 0;
//}

/* xet mot nam co phai nam nhuan khong*/
//#include <stdio.h>
//int main ()
//{
//	int a;
//	printf ("Nhap nam can kiem tra");
//	scanf ("%d", &a);
//	if ( a % 4 == 0 && a%100 != 0){
//		printf ("Nam %d la nam nhuan", a);
//	}
//	else if ( a % 400 == 0){
//		printf ("Nam %d la nam nhuan", a);
//	}
//	else printf ("Nam %d khong phai la nam nhuan", a);
//}

//#include<stdio.h>
//#include<conio.h>
//main()
//{            
//    int x,y,a,b;
//    do
//    {
//        printf("Nhap a,b = ");
//        scanf("%d%d",&a,&b);
//    }
//    while(a<=0 || b<=0);
//    x=a;
//    y=b;
//    while(a!=b)
//    {
//        if(a>b)
//        {
//            a-=b;
//        }
//        else
//        {
//            b-=a;    
//        }
//    }
//    printf("Uoc chung lon nhat la %d",a);
//    printf("\nBoi chung nho nhat la %d",(x*y)/a);
//    getch();
//}








	
