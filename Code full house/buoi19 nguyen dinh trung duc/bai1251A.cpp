/*bai 1251A*/

#include<stdio.h>
#include<string.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int a[1000]={1};
		char c[1000];
		scanf("%s",c);
		int len=strlen(c);
		for(int i=0;i<len-1;i++){
			int cnt=1;
			int d=c[i]-'a';
			if (a[d]==1){
				for(int j=i+1;j<len;j++){
					if((c[j]-'a')==d){
						cnt++;
						a[(c[j]-'a')]=0;
					}
				}
			if(cnt%2==1){
				printf("%c",c[i]);
			}
			}
		}
		printf("\n");
	}
}
