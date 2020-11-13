/*bai 734B */
/* di copy */

//#include <stdio.h>
//#include <math.h>
// 
//int min(int a,int b){
//	if(a<b)
//		return a;
//	return b;
//}
// 
//int main(){
//	int k2,k3,k5,k6;
//	scanf("%d%d%d%d",&k2,&k3,&k5,&k6);
//	int c1=min(k2,min(k5,k6));
//	k2-=c1;
//	int c2=min(k2,k3);
//	printf("%d",c1*256+c2*32);
//	return 0;
//}

#include<stdio.h>
int min(int a, int b){
	if(a>b) return b;
	return a;
}
int main(){
	int k2,k3,k5,k6;
	scanf("%d%d%d%d",&k2, &k3, &k5, &k6);
	int c1=min(k2,min(k5,k6));
	k2-=c1;
	int c2=min(k2,k3);
	printf("%d", c1*256+c2*32);
	return 0;
}
