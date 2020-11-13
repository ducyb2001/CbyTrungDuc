/*bai 10 */
#include<stdio.h>
const long long mod=1e9+7;
void solve(int n){
	long long i,f1=0,f2=1,fn=0;
	for (i=2; i<=n; i++){
		f1=f2;
		f2=fn;
		fn=f2+f1;
		fn%=mod;
	}
	printf ("%lld\n", fn);
}
int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		printf("Test %d:\n", i);
		int n;
		scanf("%d", &n);
		solve(n);
	}
}




//#include<stdio.h>
//const long long mod=1e9+7;
//int main(){
//	int T;
//	scanf("%d",&T);
//	while(T--){
//		int n;
//		scanf("%d",&n);
//		int F[n+1];
//		F[0]=0;
//		F[1]=1;
//		for (int i=2 ; i<=n ; i++){
//			F[i]=F[i-1]%mod+F[i-2]%mod;
//		}
//		printf("%d\n",F[n]);
//	}
//	return 0;
//}

//#include<stdio.h>
//const long long mod=1e9;
//int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
//		int n;
//		scanf("%d",&n);
//		int f[n+1];
//		f[0]=0;f[1]=1;
//		for(int i=2;i<=n;i++){
//			f[i]=f[i-1]+f[i-2];
//			f[i]%=mod;
//			
//		}
//		printf("%d\n",f[n]);
//	}
//	return 0;
//}
