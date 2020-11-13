/*bai 1213A*/
/*sai o test 6 tren code force*/
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int chan=0,le=0;
	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		if(x%2==0){
			chan++;
		}
		else{
			le++;
		}
	}
	if (chan>le){
		printf("%d", le);
	}
	else printf("%d", chan);
	return 0;
}
