//#include<stdio.h>
//int main(){
//	int i,j,n;
//	scanf("%d", &n);
////	for(i=1;i<=n;i++){
////		for(j=1;j<=2*n-1;j++){
////		if(i+j<n+1 || j-i>n-1){
////			printf(" ");
////		}
////		else
////			{
////				printf("*");
////			}
////		}
////		printf("\n");
////	}
//	for(i=1; i<=n; i++){
//		for(j=n-i+1;j>=0;j--){
//			printf(" ");
//		}
////		for(j=1;j<=i;j++){
////			printf("*");
////		}
////		for(j=1;j<i;j++){
////			printf("*");
////		}
//		for(j=1;j<=2*i-1;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//#include<math.h>
//int main(){
//	double x,y,z,F;
//	scanf("%lf%lf%lf", &x, &y,&z);
//	F=((x+y+z)/(x*x+y*y+1)-fabs(x-z*cos(y)));
//	printf("%f", F);
//}


/*so thuan nguyen to*/
#include<stdio.h>
#include<math.h>
int nt (int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int scs(int n){
    int a;
    while(n){
        a=n%10;
        n/=10;
        if(a!=2 && a!=3 && a!=5 &&a!=7){
            return 0;
        }
    }
    return 1;
}
int tong(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    if(nt(sum)==1) return 1;
    return 0;
}

int main(){
    int x,y;
    scanf("%d%d", &x,&y);
    for(int i=x;i<=y;i++){
        if(nt(i)&&tong(i)&&scs(i)){
            printf("%d ",i);
        }
    }
}
