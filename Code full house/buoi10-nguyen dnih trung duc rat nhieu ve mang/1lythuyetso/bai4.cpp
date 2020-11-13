/* bai 4 */

//#include<stdio.h>
//int main(){
//	int t;
//	scanf("%d", &t);
//	for(int i=1;i<=t;i++){
//		printf("Test %d:\n",i);
//		int m,n,a,b;
//		int cnt=0;
//		scanf("%d %d %d %d", &m,&n,&a,&b);
//		for(int j=m;j<=n;j++){
//			if(j%a==0||j%b==0) cnt++;
//		}
//		printf("%d",cnt);
//		printf("\n");
//	}
//}

#include<stdio.h>
#include<math.h>

int gcd(int a,int b){
	while(b>0){
		int tmp=a%b;
		a=b;
		b=tmp;
	}
	return a;
}
int dem(int m,int n,int a, int b){
	int dem1=n/a-(int)ceil(1.0*m/a)+1;
	int dem2=n/b-(int)ceil(1.0*m/b)+1;
	int l=a*b/gcd(a,b);
	int dem3=n/l-(int)ceil(1.0*m/l)+1;
	return dem1+dem2-dem3;
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int m,n,a,b;
		scanf("%d%d%d%d",&m,&n,&a,&b);
		int kq=dem(m,n,a,b);
		printf("%d\n",kq);
	}
}
