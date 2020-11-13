/* luu do thuât toán */

/*tinh giai thua */

//#include<stdio.h>
//int main()
//{
//	int i, n;
//	long P;
//	i = 1;
//	P = 1;
//	do
//	{
//		printf("\nNhap n: ");
//		scanf("%d", &n);
//		if(n < 1)
//		{
//			printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
//		}
//	}while(n < 1);
//
//	while(i <= n)
//	{
//		P = P * i;
//		i++;
//	}
//	printf("\nTich 1x2x....x%d la: %ld", i, P);
//	return 0;
//}

// 1/1*2 + 1/2*3 + 1/3*4... + 1/n*(n+1)

//#include<stdio.h>
//int main()
//{
//	int i, n;
//	float S;
//	S = 0;
//	i = 1;
//	do
//	{
//		printf("\nNhap n: ");
//		scanf("%d", &n);
//		if(n < 1)
//		{
//			printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
//		}
//	}while(n < 1);
//
//	while(i <= n)
//	{
//		S = S + 1.0 / (i * (i + 1));
//		i++;
//	}
//	printf("\nTong la %f", S);
//	return 0;
//}


// 1/2 + 2/3 + 3/4 +...+ n/n+1; 

//#include<stdio.h>
//int main()
//{
//	int i, n;
//	float S;
//	S = 0;
//	i = 1;
//	do
//	{
//		printf("\nNhap n: ");
//		scanf("%d", &n);
//		if(n < 1)
//		{
//			printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
//		}
//	}while(n < 1);
//
//	while(i <= n)
//	{
//		S = S + (float)i / (i + 1);
//		i++;
//	}
//	printf("\nTong la %f", S);
//
//	return 0;
//}

// tinh 1/2 + 3/4 + 5/6 +... + 2n+1/2n+2;

//#include<stdio.h>
//#include<conio.h>
//
//int main()
//{
//	int i, n;
//	float S;
//	S = 0;
//	i = 0;
//	do
//	{
//		printf("\nNhap n: ");
//		scanf("%d", &n);
//		if(n < 1)
//		{
//			printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
//		}
//	}while(n < 1);
//
//	while(i < n)
//	{
//		S = S + (float)(2 * i + 1) / (2 * i + 2);
//		i++;
//	}
//	printf("\nTong la %f", S);
//
//	getch();
//	return 0;
//}

// tinh 1+ 1*2+ 1*2*3+...+1*2*...*n

//#include<stdio.h>
//#include<conio.h>
//
//int main()
//{
//	int i, n;
//	long S, P;
//	S = 0;
//	P = 1;
//	i = 1;
//	do
//	{
//		printf("\nNhap n: ");
//		scanf("%d", &n);
//		if(n < 1)
//		{
//			printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
//		}
//	}while(n < 1);
//
//	while(i <= n)
//	{
//		P = P * i;
//		S = S + P;
//		i++;
//	}
//	printf("\nTong la %d",S);
//
//	getch();
//	return 0;
//}

/*bai 33 */
//canbac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dau can

//#include<stdio.h>
//#include<conio.h>
//#include<math.h>
//int main()
//{
//	int i, n;
//	float S;
//	do
//	{
//		printf("\nNhap n(n >= 1): ");
//		scanf("%d", &n);
//
//		if(n < 1)
//		{
//			printf("\nn phai >= 1. Xin nhap lai !");
//		}
//	}while(n < 1);
//
//	S = sqrt((float)2);
//	for(i = 2; i <= n; i++)
//	{
//		S = sqrt(2 + S);
//	}
//	printf("\nTong S = %f", S);
//
//	getch();
//	return 0;
//}

//Bài 34: Tính S(n) = CanBac2(n+CanBac2(n – 1 + CanBac2( n – 2 + … + CanBac2(2 + CanBac2(1)  có n dau can

//#include<stdio.h>
//#include<conio.h>
//#include<math.h>
//int main()
//{
//	int i, n;
//	float S;
//	do
//	{
//		printf("\nNhap n(n >= 1): ");
//		scanf("%d", &n);
//
//		if(n < 1)
//		{
//			printf("\nn phai >= 1. Xin nhap lai !");
//		}
//	}while(n < 1);
//
//	i = 1;
//	S = 0;
//
//	while(i <= n)
//	{
//		S = sqrt(i + S);
//		i++;
//	}
//	printf("\nTong S = %f", S);
//
//	getch();
//	return 0;
//}

////Bài 34: Tính S(n) = CanBac2(n+CanBac2(n – 1 + CanBac2( n – 2 + … + CanBac2(2 + CanBac2(1)  có n dau can
//
//#include<stdio.h>
//#include<conio.h>
//#include<math.h>
//int main()
//{
//	int i, n;
//	float S;
//	do
//	{
//		printf("\nNhap n(n >= 1): ");
//		scanf("%d", &n);
//
//		if(n < 1)
//		{
//			printf("\nn phai >= 1. Xin nhap lai !");
//		}
//	}while(n < 1);
//
//	i = 1;
//	S = 0;
//
//	while(i <= n)
//	{
//		S = sqrt(i + S);
//		i++;
//	}
//	printf("\nTong S = %f", S);
//
//	getch();
//	return 0;
//}
//
//Bài 36: Tính S(n) = CanBac2(n! + CanBac2((n-1)! +CanBac2((n – 2)! + … + CanBac2(2!) + CanBac2(1!)))) có n d?u can
//#include<stdio.h>
//#include<conio.h>
//#include<math.h>
//int main()
//{
//	int i, n;
//	float S, M;
//	do
//	{
//		printf("\nNhap n(n >= 1): ");
//		scanf("%d", &n);
//
//		if(n < 1)
//		{
//			printf("\nn phai >= 1. Xin nhap lai !");
//		}
//	}while(n < 1);
//	i = 1;
//    M = 1;
//	S = sqrt((float)0);
//
//	while(i <= n)
//	{
//		M = M * i;
//		S = sqrt(M + S);
//		i++;
//	}
//	printf("\nTong la %f", S);
//
//	getch();
//	return 0;
//}
//
//Bài 37: Tính S(n) = CanBac N(N + CanBac N – 1(N – 1 + … + CanBac3(3 + CanBac2(2))) có n – 1 d?u can
//
//#include<stdio.h>
//#include<conio.h>
//#include<math.h>
//int main()
//{
//	int i, n;
//	float S;
//	do
//	{
//		printf("\nNhap n(n >= 2): ");
//		scanf("%d", &n);
//
//		if(n < 2)
//		{
//			printf("\nn phai >= 2. Xin nhap lai !");
//		}
//	}while(n < 2);
//	i = 3;
//	S = pow(2.0, 1.0/2);
//	while(i <= n)
//	{
//		S = pow((i + S) * 1.0, 1.0/i);
//		i++;
//	}
//	printf("\nTong la %f", S);
//
//	getch();
//	return 0;
//}
//
//Bài 67: Tính S(x, n) = x – x^2 + x^3 + … + (-1)^n+1 * x^n
//
//#include<stdio.h>
//#include<conio.h>
//
//int main()
//{
//	float x, S, T;
//	int i, n;
//	S = 0;
//	T = 1;
//	i = 1;
//	
//	printf("\nNhap x: ");
//	scanf("%f", &x);
//	
//	x = -x;
//	do
//	{
//	printf("\nNhap n: ");
//	scanf("%d", &n);
//	if(n < 1)
//	{
//		printf("\nDu lieu khong hop le. Xin kiem tra lai !");
//	}
//	}while(n < 1);
//
//	while(i <= n)
//	{
//		T = T * x;
//		S = S + T;
//		i++;
//	}
//	printf("\nTong = %f", -S);
//	getch();
//	return 0;
//}



