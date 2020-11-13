/*bai 1146A*/

#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	scanf("%s",c);
	int i,cnt=0;
	int len=strlen(c);
	for(i=0; i<len;i++){
		if((c[i]-'a')==0) cnt++;
	}
	if(cnt>(len/2)){
		printf("%d",len);
		return 0;
	}
	else printf("%d",2*cnt-1);
}
