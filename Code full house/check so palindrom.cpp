/* ham check so palin*/
#include <stdio.h>
int palin(int i){
	int r, sum=0;
	int temp=i;
	while (i>0){
	r=i%10;
	sum=(sum*10)+r;
	i/=10;
}
	if (temp==sum) return 1;
	return 0;
}
/* ham chinh tu 1 den n*/

//int main (){
//	int i,n;
//	scanf ("%d", &n);
//	for (i=0; i<n; i++){
//		if (palin(i)) printf ("%d ", i);
//	}
//	return 0;
//}

/*ham chinh so palin thu n*/
int main (){
int i,n;
int count = 0;
scanf ("%d", &n);
for (i=0; count < n; i++){
	if (palin(i)) count++;
	if (count==n) printf ("%d", i);
}
return 0;
}

/*ham chinh in ra n so palin */

//int main(){
//	int i,n;
//	int count=0;
//	scanf("%d", &n);
//	for (i=0; count < n; i++){
//		if (palin(i)==1){
//		printf("%d ", i);
//		count ++;
//	}
//	}
//	return 0;
//}

