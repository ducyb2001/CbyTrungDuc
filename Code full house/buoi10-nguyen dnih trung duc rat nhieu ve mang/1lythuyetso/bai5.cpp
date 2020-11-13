/* bai 5 */

#include<stdio.h>
#include<math.h>
int dem(int n,int k){
	int res=0;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			n/=i;
			res++;
			if(res==k){
				return i;
			}
		}
	}
	if(n>1){
		res++;
		if(res==k){
			return n;
		}
	}
	return -1;
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int N,k;
		scanf("%d%d",&N,&k);
		printf("%d\n",dem(N,k));
	}
}
//#include<stdio.h>
//
//void solve(int n, int k){
//	int cnt=0;
//	for(int i=2;i<=n;i++){
//		while(n%i==0){
//			++cnt;
//			n/=i;
//			if(cnt==k){
//				printf("%d",i);
//			}
//		}
//	}
//	if(k>cnt) printf("-1");
//	printf("\n");
//}
//int main(){
//	int t;
//	scanf("%d", &t);
//	for(int i=1;i<=t;i++){
//		printf("Test %d:\n",i);
//		int N,k;
//		scanf("%d %d", &N, &k);
//		solve(N,k);
//	}
//}
