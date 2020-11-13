/*bai 1189 A*/

#include<stdio.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	char c[1000];
	scanf("%s",c);
	int cnt1=0, cnt2=0;
	for(int i=0;i<n;i++){
		if(c[i]=='1')
			cnt1++;
		else cnt2++;
	}
	if(cnt1!=cnt2){
		printf("1\n");
		printf("%s",c);
	}
	else {
		printf("2\n");
		printf("%c ", c[0]);
		for(int i=1;i<n;i++){
			printf("%c", c[i]);
		}
	}
}
