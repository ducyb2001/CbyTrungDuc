/*bai59A*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char c[1000];
	gets(c);
	int cnt1=0,cnt2=0;
	for(int i=0;i<strlen(c);i++){
		if(c[i]>='A'&& c[i]<='Z'){
			cnt1++;
		}
		else if(c[i]>='a' && c[i]<='z'){
			cnt2++;
		}
	}
	if(cnt1>cnt2){
		printf("%s",strupr(c));
	}
	else printf("%s",strlwr(c));
}
