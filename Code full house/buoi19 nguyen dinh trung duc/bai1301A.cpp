/*bai 1301A*/

#include<stdio.h>
#include<string.h>

int checkcs(int a, int b, int c){
	if(a==b && b==c && a==c){
		return 1;
	}
	return 0;
}

void check(char a[], char b[], char c[], int n){
	for(int i=0;i<n;i++){
		if(((a[i] == b[i])&&(a[i]!=c[i])) || ((c[i] != b[i]) && c[i]!= a[i] )){
			printf("NO\n");	
			return;
		}
	}
	printf("YES\n");
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char a[101], b[101], c[101];
		scanf("%s%s%s",a,b,c);
		int a1=strlen(a), b1=strlen(b), c1=strlen(c);
		if(checkcs(a1,b1,c1)==0){
			printf("NO\n");
		}
		else {
			check(a,b,c,a1);
		}
	}
}
