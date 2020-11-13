/*bai 734A*/

#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char c[100001];
	gets(c);
	int cnt=0;
	for(int i=0;i<n;i++){
		if((c[i])=='A') cnt++;
		else cnt--;
	}
	if(cnt>0){
		printf("Anton");
	}
	else if(cnt<0){
		printf("Danik");
	}
	else printf("Friendship");
}
