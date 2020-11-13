#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char c[1000];
	scanf("%s",c);
	int cnt=0;
	char a[6]={'h','e','l','l','o','\0'};
	for(int i=0; i<strlen(c);i++){
		if(c[i]==a[cnt]){
			cnt++;
		}
	}
	if(cnt==5)
		printf("YES");
	else printf("NO");
		return 0;
}
