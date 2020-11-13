/*bai 1027A*/

#include<stdio.h>
#include<string.h>
#include<math.h>

void check(char a[], int n){
	int l=0, r=n-1;
	while(l<r){
		int kq=(a[l]-'a')-(a[r]-'a');
		if(kq==0 || kq==-2 || kq == 2){
			l++;
			r--;
			continue;
		}
		printf("NO\n");
		return;
	}
	printf("YES\n");	
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		getchar();
		char a[1000];
		scanf("%s",a);
		check(a,n);
	int l=0, r=n-1;
	}
}
