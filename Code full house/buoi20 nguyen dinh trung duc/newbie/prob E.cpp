/*problem E */

#include<stdio.h>
#include<string.h>
int check(char c){
	if(c=='u' || c=='e' || c=='o' || c=='a' || c=='i' || c=='y'){
		return 1;
	}
	return 0;
}
int main(){
	char c[100];
	scanf("%s",c);
	strlwr(c);
	for(int i=0;i<strlen(c);i++){
		if(check(c[i])==0) printf(".%c",c[i]);
	}
}
