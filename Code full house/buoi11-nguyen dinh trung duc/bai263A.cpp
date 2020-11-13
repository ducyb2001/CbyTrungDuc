/*bai 263A*/
/*da check dung */
#include<stdio.h>
#include<math.h>
int main(){
	int a[5][5];
	int index1,index2;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d", &a[i][j]);
			if(a[i][j]==1){
				index1=i;
				index2=j;
			}
		}
	}
	int c=abs(index1-2)+abs(index2-2);
	printf("%d", c);
}
