/*bai 10 bai toan doi tien */
/*cach nay toi duoc thang ban chi cho nhung ma chua duoc hoc*/
//#include <stdio.h>
//int main() {
//	int T;
//	scanf("%d",&T);
//	while(T--){
//	int a[2][9] = {{500, 200, 100, 50, 20, 10, 5, 2, 1}, {0, 0, 0, 0, 0, 0, 0, 0, 0}};
//	int n, i = 0;
//	scanf("%d", &n);
//	while (n != 0) {
//		a[1][i] = n / a[0][i];
//		n %= a[0][i];
//		i++;
//	}
//	int cnt=0;
//	for (i = 0; i < 9; i++) {
//		if (a[1][i] > 0) {
//			cnt+=a[1][i];
//			printf("So to %d,000VND la: %d\n", a[0][i], a[1][i]);
//		}
//	}
//	printf("%d\n",cnt);
//	}
//}

#include<stdio.h>
int p[10]={1000,500,200,100,50,20,10,5,2,1};
int solve(int n){
	int ans=0;
	for(int i=0;i<10;i++){
		ans+=n/p[i];
		n=n%p[i];
			if(n==0) break;
	}
	return ans;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d\n",solve(n));
	}
}
//#include<stdio.h>
//int main(){
//	int T;
//	scanf("%d",&T);
//	while(T--){
//		int n;
//		scanf("%d",&n);
//		int cnt=0;
//		while(n>=1000){
//			cnt++;
//			n-=1000;
//		}
//		while(n>=500){
//			cnt++;
//			n-=500;
//		}
//		while(n>=200){
//			cnt++;
//			n-=200;
//		}
//		while(n>=100){
//			cnt++;
//			n-=100;
//		}
//		while(n>=50){
//			cnt++;
//			n-=50;
//		}
//		while(n>=20){
//			cnt++;
//			n-=20;
//		}
//		while(n>=10){
//			cnt++;
//			n-=10;
//		}
//		while(n>=5){
//			cnt++;
//			n-=5;
//		}
//		while(n>=2){
//			cnt++;
//			n-=2;
//		}
//		cnt+=n;
//		printf("%d\n", cnt);
//	}
//}
