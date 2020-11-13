#include<stdio.h>
#include<math.h>

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		int a=0,b=0, flag=0;
		for(int i=2;i<sqrt(n);i++){
			if(n%i==0){
				if(a==0){
					a=i;
					n/=i;
				}
				else{
					b=i;
					n/=i;
					if(a<b&&b<n){
						flag=1;	
					}
					break;
				}
			}
		}
		if(flag)
			printf("YES\n%d %d %d\n",a,b,n);
		else
			printf("NO\n");
	}
	return 0;
}
