/* tim so thuan nghich */
//bai 35 file btcoban

#include<stdio.h>
int thuannghich(int i){
	int sum=0;
	int r, temp=i;
	while (i>0){
		r=i%10;
		i/=10;
		sum=(sum*10 + r);
	}
	if (temp==sum) return 1;
	return 0;
}
int main(){
	int n;
	scanf ("%d", &n);
	if (thuannghich (n)==1) printf ("la so thuan nghich");
	else printf ("Khong phai so thuan nghich");
	return 0;
}
