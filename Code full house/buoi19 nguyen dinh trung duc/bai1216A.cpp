/*bai 1216A*/

#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	char a[2000001];
	scanf("%s",a);
	int cnt=0;
	for(int i=0;i<n;i+=2){
		if((a[i]-'a') == (a[i+1]-'a')){
			cnt++;
			if(a[i]-'a'==1){
				a[i] = 'a';
			}
			else a[i] = 'b';
		}
	}
	printf("%d\n%s",cnt,a);
}
