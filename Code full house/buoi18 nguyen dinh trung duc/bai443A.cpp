/*bai443A*/

#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	gets(c);
	int len=strlen(c);
	int ar[1000]={0};
	int cnt=0;
	for(int i=0;i<len;i++){
		if(c[i]>='a'&&c[i]<='z'){
		if(ar[c[i]-'a']==0){
			cnt++;
			ar[c[i]-'a']=1;
		}
		}
	}
	printf("%d",cnt);
}
