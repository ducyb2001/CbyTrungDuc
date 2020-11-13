/*bai 716 A */
/*da check dung */
#include<stdio.h>
int main(){
	int n,c;
	scanf("%d", &n);
	scanf("%d", &c);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int cnt=1;
	for(int i=n-1;i>0;i--){
		if((a[i]-a[i-1])<=c){
			cnt++;
		}
		else if(a[i]-a[i-1]>c){
			break;
		}
	}
	printf("%d", cnt);
}
