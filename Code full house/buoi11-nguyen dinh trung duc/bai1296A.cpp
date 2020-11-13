/*bai 1296 A */
#include<stdio.h>
/*da check dung */
void solve1(int a[], int n){
	for(int i=0;i<n;i++){
		if(a[i]%2!=0) {
			printf("YES\n");
			return;
		}
	}
	printf("NO\n");
}

void solve2(int a[], int n){
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0) {
			cnt++;
		}
	}
	if(cnt==0||cnt==n){
		printf("NO\n");
	}
	else printf("YES\n");
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		if(n%2==0){
			solve2(a,n);
		}
		else{
			solve1(a,n);
		}
	}
}
