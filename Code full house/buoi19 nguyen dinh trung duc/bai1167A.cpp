/*bai 1167A*/

#include<stdio.h>
#include<string.h>
void check(char c[],int n){
	for(int i=0;i<=n-11;i++){
		if((c[i]-'0')==8){
			printf("YES\n");
			return;
		}
	}
	printf("NO\n");
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		char c[1000];
		scanf("%s",c);
		check(c,n);
	}
}
