/*bai 24 part 2*/

#include<stdio.h>
int main (){
	int i,j,n;
	int count;
	scanf ("%d", &n);
	if (n<0) printf ("khong co");
	else{
	for (i=2; i<=n;i++){
		count = 0;
		for (j=1; j<=n; j++)
			if(i%j==0) count ++;
			if(count == 2) printf ("%3d", i);
	}
}
}
