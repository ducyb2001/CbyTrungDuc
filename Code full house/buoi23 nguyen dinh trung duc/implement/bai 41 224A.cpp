/*bai 41 224 A*/

#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a, &b, &c);
	int x = sqrt(a * b / c);
	int y = sqrt(a * c / b);
	int z = sqrt(c * b / a);
	int sum = x+y+z;
	printf("%d", sum*4);
}
