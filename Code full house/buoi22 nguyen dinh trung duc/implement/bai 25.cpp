/*bai 25*/
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int kq=1;
	for(int i=5;i<=n;i+=5){
		kq*=i;
	}
	kq*=2;
	int cnt=0;
	while(kq){
		int r=kq%10;
		if(r==0){
			cnt++;
			kq/=10;
		}
		else if(r!=0){
			printf("%d",cnt);
			return 0;
		}
	}
}
