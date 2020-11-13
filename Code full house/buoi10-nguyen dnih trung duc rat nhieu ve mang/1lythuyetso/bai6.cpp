/*bai 6*/
//#include<stdio.h>
//#include<math.h>
//
//int nt(int n){
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0) return 0;
//	}
//	return n>1;
//}
//
//int tongCS(int n){
//	int sum=0;
//	int r;
//	while(n){
//		r=n%10;
//		sum+=r;
//		n/=10;
//	}
//	return sum;
//}
//int tongCacUoc (int n)
//{
//	int sum=0;
//	for (int i=2;i<=sqrt(n);i++)
//		{
//			if (n%i==0)
//			{
//				while (n%i==0)
//				{
//					sum+=tongCS(i);
//					n/=i;	
//				}
//			}
//		}
//	if (n!=1)
//		sum+=tongCS(n);
//	return sum;
//}
//
//
//int solve(int n){
//	if(tongCacUoc(n)==tongCS(n)&&(nt(n)==0)) printf("Yes\n");
//	else printf("No\n");
//}
//int main(){
//	int t;
//	scanf("%d", &t);
//	for(int i=1;i<=t;i++){
//		printf("Test %d:\n",i);
//		int n;
//		scanf("%d", &n);
//		solve(n);
//	}
//}

#include<stdio.h>
#include<math.h>

int tong(int n){
	int res=0;
	while(n){
		res+=n%10;
		n/=10;
	}
	return res;
}

int smith(int n){
	int sum1=0,sum2=tong(n);
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			n/=i;
			sum1+=tong(i);
		}
	}
	if(n>1){
		sum1+=tong(n);
	}
	if(sum1==sum2) return 1;
	return 0;
}

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		if(nt(n)==0&&smith(n)) printf("Yes\n");
		else printf("No\n");
	}
}
