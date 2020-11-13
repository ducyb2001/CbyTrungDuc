/* uoc chung lon nhat su dung phep tru */

//#include <stdio.h>
//
//int UCLN(int a,int b){
//    if (a%b!=0)
//        return UCLN(b,a%b);
//    else
//        return b;
//}
//
//int BCNN(int a,int b){
//    return (a*b)/UCLN(a,b);
//}
//

//#include<stdio.h>
//int main(){
//	int a,b;
//	scanf("%d%d",&a,&b);
//	int c=a, d=b;
//    // Neu a = 0 => ucln(a,b) = b
//    // Neu b = 0 => ucln(a,b) = a
//    if (a == 0 || b == 0){
//        printf("%d", a+b);
//    }
//    while (a != b){
//        if (a > b){
//            a -= b; // a = a - b
//        }else{
//            b -= a;
//        }
//    }
//    printf("%d",b); // return a or b, boi vì lúc này a và b bang nhau
//    printf("\n%d",c*d/b);
//}

//#include<stdio.h>
//int main(){
//    int a,b,uc,bc;
//    printf("Nhap (a,b): ");
//    scanf("%d%d",&a,&b);
//    for (uc=a;uc>=1;uc--){
//        if (a%uc==0 && b%uc==0){
//            printf("UCLN(%d,%d)=%d\n",a,b,uc);
//            break;
//        }
//    }
//    for (bc=a;bc<=a*b;bc++){
//        if (bc%a==0 && bc%b==0){
//            printf("BCNN(%d,%d)=%d\n",a,b,bc);
//            break;
//        }
//    }
//    return 0;
//}

#include <stdio.h>

int UCLN(int a,int b){
    if (a%b!=0)
        return UCLN(b,a%b);
    else
        return b;
}

int BCNN(int a,int b){
    return (a*b)/UCLN(a,b);
}

int main(){
    int a,b,ucln,bcnn;
    printf("Nhap (a,b): ");
    scanf("%d%d",&a,&b);
    ucln = UCLN(a,b);
    printf("UCLN(%d,%d)=%d\n",a,b,ucln);
    bcnn = BCNN(a,b);
    printf("BCNN(%d,%d)=%d\n",a,b,bcnn);
    return 0;
}

//#include<stdio.h>
//
//int main(){
//	int i,j;
//	int a,b;
//	scanf("%d%d",&a,&b);
//	for(i=1;i<=a; i++){
//		for (j=1;j<=b;j++){
//			if(i==1 || i==a || j==1 || j==b)
//			printf("*");
//			else printf(" ");
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main(){
//	int i,j,n;
//	scanf("%d", &n);
//	for (i=1;i<=n; i++){
//		for (j=1; j<=i;j++){
//			if (i==n || j==1 || i==j) printf("*");
//			else printf(" ");
//		}
//		printf("\n");
//	}
//}


//#include<stdio.h>
//int main(){
//	int i,j,n;
//	scanf("%d",&n);
//	for (i=1; i<=n;i++){
//		for(j=1; j<=n; j++){
//			if (i==n || j==n||i+j==n+1)
//			printf("*");
//			else printf(" ");
//		}
//		printf("\n");
//	}
//}

//	for (j=1; j<=n; j++){
//		if(i==1|| j==n || i==j) printf("*");
//		else printf(" ");
//		}
// 	printf("\n");

//	for(j=1; j<=n;j++){
//		if (i==1||j==1||i+j==n+1) printf("*");
//		else printf(" ");
//	}
//	printf("\n");
// }
//	}

