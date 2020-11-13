/*bai 141A*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char a[1000], b[1000], c[1000];
	scanf("%s%s%s", a, b, c);
	if(strlen(a)+strlen(b)!=strlen(c)){
		printf("NO");
		return 0;
	}
	int dem[26]={0};
	for(int i=0;i<strlen(a);i++){
		dem[a[i]-'A']++;
	}
	for(int i=0;i<strlen(b);i++){
		dem[b[i]-'A']++;
	}
	for(int i=0;i<strlen(c);i++){
		dem[c[i]-'A']--;
	}
	for(int i=0;i<26;i++){
		if(dem[i]!=0){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
}

