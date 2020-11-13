/*bai 1139A*/

#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char c[65001];
	scanf("%s",c);
	int cnt=0;
	for(int i=0;i<n;i++){
		if((c[i]-'0')%2==0){
			cnt+=i+1;
		}
	}
	printf("%d",cnt);
}
