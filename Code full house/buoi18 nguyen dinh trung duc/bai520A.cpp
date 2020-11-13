/*bai 520A*/

#include<stdio.h>
#include<string.h>
int main(){
	int a[26]={0};
	int n;
	scanf("%d",&n);
	getchar();
	char c[1000];
	scanf("%s",c);
	for(int i=0;i<strlen(c);i++){
		if(c[i]>='A'&&c[i]<='Z')
			c[i]+=32;
	}
	for(int i=0;i<strlen(c);i++){
		a[c[i]-'a']=1;
	}
	int cnt=0;
	for(int i=0;i<26;i++){
		if(a[i]==1){
			cnt++;
		}
	}
	if(cnt==26){
		printf("YES");
	}
	else printf("NO");
}
