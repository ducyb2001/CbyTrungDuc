/*bai 5 1328A*/

#include<stdio.h>
#include<math.h>

void check(int a, int b){
	int i = a/b +1;
	if(a%b==0){
		printf("0\n");
		return;
	}
	int kq = i*b-a;
	printf("%d\n",kq);
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int a,b;
		scanf("%d%d",&a,&b);
		check(a,b);
	}
}
