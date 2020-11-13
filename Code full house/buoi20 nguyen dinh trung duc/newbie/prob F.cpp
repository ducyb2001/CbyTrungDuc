/*problem F*/

// so femat

#include<stdio.h>
#include<math.h>

int main(){
	long long n;
	scanf("%lld",&n);
	for(int i=0;i<=n;i++){
		long long x=pow(2,pow(2,i));
		if(x+1==n){
			printf("Yes");
			return 0;
		}
	}
	printf("No");
}
