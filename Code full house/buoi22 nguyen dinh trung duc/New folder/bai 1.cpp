/*bai 1*/

#include<stdio.h>
#include<string.h>

void next(char c[]){
	int i=strlen(c)-1;
	while(i>=0 && c[i]=='1'){
		c[i]='0';
		i--;
	}
	if(i>=0)
		c[i]='1';
	printf("%s\n",c);
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char c[1000];
		scanf("%s",c);
		next(c);
	}
	return 0;
}
