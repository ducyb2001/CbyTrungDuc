/*bai 41A*/
#include<stdio.h>
#include<string.h>
int main(){
	char c1[1000],c2[1000];
	gets(c1);
	gets(c2);
	int len=strlen(c1);
	for(int i=0;i<len;i++){
		if((c1[i]-'A')!=(c2[len-i-1]-'A')){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
}

