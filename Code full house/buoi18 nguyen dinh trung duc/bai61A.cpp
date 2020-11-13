/*bai 61A*/

#include<stdio.h>
#include<string.h>
int main(){
	char c1[1000],c2[1000];
	gets(c1);
	gets(c2);
	int len=strlen(c1);
	for(int i=0;i<len;i++){
		if((c1[i]-'0')+(c2[i]-'0')==1){
			printf("1");
		}
		else if((c1[i]-'0')+(c2[i]-'0')==0 || (c1[i]-'0')+(c2[i]-'0')==2){
			printf("0");
		}
	}
}
