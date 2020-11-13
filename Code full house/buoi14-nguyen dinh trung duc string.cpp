/*mau string */

#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	gets(c);
	int len=0;
	for(int i=0;c[i]!='\0';i++){
		len++;
	}
	printf("%d",len);
	return 0;
}
