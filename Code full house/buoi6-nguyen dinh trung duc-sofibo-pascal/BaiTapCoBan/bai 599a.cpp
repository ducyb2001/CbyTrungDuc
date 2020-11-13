/*bai 599A */
/*chep bai */

//#include<stdio.h>
//int min(int a, int b){
//	if(a>b) return b;
//	return a; 
//}
//
//int main(){
//	int d1,d2,d3;
//	scanf("%d%d%d", &d1, &d2, &d3);
//	int c1=d1+d2+d3;
//	int c2=2*(d1+d2);
//	int c3=2*(d2+d3);
//	int c4=2*(d1+d3);
//	int res=min (min(c1,c2) , min(c3,c4));
//	printf("%d", res);
//return 0;
//}

#include<stdio.h>

int min(int a, int b){
	if(a>b) return b;
	return a;
}

int main(){
	int d1,d2,d3;
	scanf("%d%d%d", &d1, &d2, &d3);
	int a=d1+d2+d3;
	int b=2*(d1+d2);
	int c=2*(d1+d3);
	int d=2*(d2+d3);
	int res=min(min(a,b),min(c,d));
	printf("%d", res);
}

