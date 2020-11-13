/*bai 266A*/

#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char c[n+1];
	gets(c);
	int cnt=0;
	for(int i=0;i<n-1;i++){
		if((c[i+1])==c[i]) cnt++;
	}
	printf("%d",cnt);
}
