#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	gets(c);
	char *token=strtok(c," ");
	while(token!=NULL){
		printf("%s",token);
		token=strtok(NULL," ");
	}
}
