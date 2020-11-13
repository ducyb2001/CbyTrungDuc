/*day so fibonacci*/

//#include<stdio.h>
//int main ()
//{
//int i,n,f1=0,f2=1,fn=0;
//int sum=0;
//printf ("Nhap so n:");
//scanf ("%d", &n);
//if (n>0) printf ("0");
//for (i=2; i<=n; i++){
//	f1=f2;
//	f2=fn;
//	fn=f2+f1;
//	sum+=fn;
//	printf ("%3d", fn);
//}
////printf ("\n%d", fn);
////printf ("\n%d", sum);
//return 0;
//}

#include<stdio.h>
int fibo(int n)

//#include<stdio.h>
//int main(){
//	int n, f1=0, f2=1, fn;
//	scanf ("%d",&n);
//	while (f1+f2 <n){
//		fn=f1+f2;
//		f1=f2;
//		f2=fn;
//	}
//	printf ("%d", fn);
//	return 0;
//}


///* so armstrong*/

/*armstrong*/

//#include <stdio.h>
//#include<math.h>
//int demchuso (int i)
//{
//	int dem=0;
//	while (i>0)
//	{
//		i/=10;
//		dem++;
//	}
//	return dem;
//}
//int amrstrong(int i)
//{
//	int tmp=i;
//	int a=demchuso(i);
//	int so;
//	int sum=0;
//	while (i>0)
//	{
//		so=i%10;
//		i/=10;
//		sum+=pow(so,a);
//	}
//	if (tmp==sum)
//		return 1;
//	return 0;
//}
//int main ()
//{
//	int n;
//	scanf("%d",&n);
//	for (int i=1;i<n;i++)
//	{
//		if (amrstrong(i)==1)
//			printf("%d ",i);
//	}
//	return 0;
//}
/**
 * C program to print Armstrong numbers from 1 to n
 */
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int num, lastDigit, digits, sum, i, end;
//
//    /* Input upper limit from user */
//    printf("Enter upper limit: ");
//    scanf("%d", &end);
//
//    for(i=1; i<=end; i++)
//    {
//        sum = 0;
//
//        /* Copy the value of num for processing */
//        num = i;
//
//        /* Find total digits in num */
//        digits = (int) log10(num) + 1;
//
//        /* Calculate sum of power of digits */
//        while(num > 0)
//        {
//            /* Extract last digit */
//            lastDigit = num % 10;
//
//            // Find sum of power of digits
//            // Use ceil() function to overcome any rounding errors by pow()
//            sum = sum + ceil(pow(lastDigit, digits));
//
//            /* Remove the last digit */
//            num = num / 10;
//        }
//
//        /* Check for Armstrong number */
//        if(i == sum)
//        {
//            printf("%d, ", i);
//        }
//
//    }
//
//    return 0;
//}


//#include <stdio.h>
//int snt(int a){
//	int count=0;
//	int i;
//	for (i=1; i<=a; i++){
//		if (a%i==0) count++;
//		}
//		if (count == 2) return 1;
//		else return 0;
//	}
//int main (){
//	int i,n;
//	scanf("%d", &n);
//	for (i=1; i<=n; i++){
//		if (snt(i)==1){
//		printf ("%d ", i);
//	}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int i, n, f1=0, f2=1, fn=0;
//	scanf ("%d", &n);
//	if (n>0) printf ("0 ");
//	for (i=2;i<=n; i++){
//		f1=f2;
//		f2=fn;
//		fn=f1+f2;
//	printf ("%d ", fn);
//	}
//	printf ("\n%d", fn);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int dem (int i){
//	int count=0;
//	while (i>0){
//		i/=10;
//		count ++;
//	}
//	return count;
//}
//
//int armstrong (int n){
//	int a = dem(n);
//	int temp =n;
//	int so;
//	int sum=0;
//	while (n>0){
//		so = n%10;
//		n/=10;
//		sum+=pow(so,a);
//	}
//	if (temp==sum) return 1;
//	return 0;
//}
//
//int main(){
//	int i,n;
//	scanf ("%d", &n);
//	for (i=1; i<n; i++){
//		if (armstrong(i)==1){
//			printf ("%d ", i);
//		}
//	}
//	return 0;
//}

/* so fibo thu n*/

//#include<stdio.h>
//#include<math.h>
//int dem (int i){
//	int count = 0;
//	while (i>0){
//		i/=10;
//		count++;
//	}
//	return count;
//}
//
//int armstrong (int i){
//	int a =dem(i);
//	int temp=i;
//	int so;
//	int sum =0;
//	while (i>0){
//		so=i%10;
//		i/=10;
//		sum += pow(so,a);
//	}
//	if (temp==sum) return 1;
//	return 0;
//}
//
//int main(){
//	int i, n;
//	int count=0;
//	scanf ("%d", &n);
//	for (i=0; count<n; i++){
//		if (armstrong(i)==1){
//		count ++;
//		if (count==n) printf ("%d", i);
//	}
//}
//return 0;
//}
	


