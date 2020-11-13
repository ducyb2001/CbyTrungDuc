#include<stdio.h>
int sodep(int n){
	int c1=0,c2=0;
	while(n){
		int r=n%10;
		if(r==1){
			c1=1;
		}
		if(r==9){
			c2=1;
		}
		n/=10;
	}
	if(c1+c2==2) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(sodep(a[i])) cnt++;
	}
	printf("%d", cnt);
}
