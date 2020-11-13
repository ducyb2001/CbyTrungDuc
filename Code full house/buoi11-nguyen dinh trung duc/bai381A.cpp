/*bai 381 A */

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int l=0;
	int r=n-1;
	int x=1;
	int s1=0,s2=0;
	while(l<=r){
		if(x%2==1){
			if(a[l]>a[r]){
				s1+=a[l];
				l++;
			}
			else{
				s1+=a[r];
				r--;
			}
		}
		else{
			if(a[l]>a[r]){
				s2+=a[l];
				l++;
			}
			else{
				s2+=a[r];
				r--;
			}
		}
		x++;
	}
	printf ("%d %d", s1, s2);
}
