/*bai 58A*/

#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	gets(c);
	char a[]="hello";
	int dem=0,cnt=0;
	int len=strlen(c);
	for(int i=0;i<len;i++){
		if(c[i]==a[dem]){
			dem++;
			cnt++;
		}
	}
	if(cnt==5){
		printf("YES");
	}
	else printf("NO");
}

