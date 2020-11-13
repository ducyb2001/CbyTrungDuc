/* cac ham trong toan */

/* sin example */
//#include <stdio.h>      /* printf */
//#include <math.h>       /* sin */
// 
//#define PI 3.14159265
// 
//int main ()
//{
//  double param, result;
//  param = 90.0;
//  result = sin (param*PI/180);
//  printf ("The sine of %f degrees is %f.\n", param, result );
//  return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int function(){
//    int a = 5;
//    return a;
//    printf("\na = %d", a);
//}
// 
//void foo(){
//    printf("\nThis is a sentence!");
//    exit(0);
//    printf("\nThis is other sentence!");
//}
// 
//int main(){
//    foo();
//    printf("\nExit program...");
//}
//#include <stdio.h>
// 
//int function(){
//    int a = 5;
//    return a;
//    printf("\na = %d", a);
//}
// 
//int main(){
//    int value = function();
//    printf("\nExit program...");
//}

//#include <stdio.h>
// 
//void Reverse(){
//    char c;
//    scanf("%c", &c);
//    if(c != '\n'){
//        Reverse();
//        printf("%c", c);
//    }
//}
// 
//int main(){
//    printf("Enter you sentence: ");
//    Reverse();
//}

//#include<stdio.h>
//#include<math.h>
//long long dec2bin(int decimalnumber){
//	long long binarynumber=0;
//	int p=0;
//	while(decimalnumber>0){
//		binarynumber+=(decimalnumber%2)*pow(10,p);
//		++p;
//		decimalnumber/=2;
//	}
//	return binarynumber;
//}
//
//int bin2dec(long long binarynumber){
//	int dec=0;
//	int p=0;
//	while(binarynumber>0){
//		dec+=(binarynumber%10)*pow(10,p);
//		++p;
//		binarynumber/=10;
//	}
//	return dec;
//}
//
//int dec2oct(int decimal){
//	int octal=0;
//	int p=0;
//	while(decimal>0){
//		octal+=(decimal % 8) * pow(10,p);
//		++p;
//		decimal/=10;
//	}
//}

#include <bits/stdc++.h>
using namespace std;
const long long base = 1000000007;
 
struct MaTran
{
    long long c[2][2];
    MaTran()
    {
        c[0][0]=0;
        c[0][1]=1;
        c[1][0]=1;
        c[1][1]=1;
    }
};
 
MaTran operator * (MaTran a, MaTran b)
{
    MaTran res;
    for (int i=0; i<=1; i++)
        for (int j=0; j<=1; j++)
        {
            res.c[i][j] = 0;
            for (int k=0; k<=1; k++)
                res.c[i][j] = (res.c[i][j]+a.c[i][k]*b.c[k][j])%base;
        }
    return res;
}
 
MaTran powermod (MaTran a, long long n)
{
    if (n==1)
        return a;
    if (n%2!=0)
        return powermod(a,n-1)*a;
    MaTran tmp = powermod(a,n/2);
    return tmp*tmp;
}
 
int main()
{
    freopen("fibo.inp","r",stdin);
    freopen("fibo.out","w",stdout);
    long long n;
    cin >> n;
    MaTran A;
    A = powermod(A,n);
    cout << A.c[0][1];
    return 0;
}

