/*bai 9 1352A*/

#include<stdio.h>
#include<math.h>
int scs(int n){
	int kq=0;
	while(n){
		int r=n%10;
		if(r!=0) kq++;
		n/=10;
	}
	return kq;
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		int hoa=scs(n);
		printf("%d\n",hoa);
		int i=0;
		while(n){
			int r=n%10;
			if(r!=0){
				printf("%.0f ",r*pow(10,i));
			}
			n/=10;
			i++;
		}
		printf("\n");
	}
}
