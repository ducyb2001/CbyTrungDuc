/*bai 25A*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int cnt1=0, cnt2=0, pos1,pos2;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			cnt1++;
			pos1=i;
		}
		else if(a[i]%2!=0){
			cnt2++;
			pos2=i;
		}
	}
	if(cnt1==1) printf("%d",pos1+1);
	else if(cnt2==1) printf("%d",pos2+1);
}
