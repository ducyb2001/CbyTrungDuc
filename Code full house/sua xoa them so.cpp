#include<stdio.h>
#include<math.h>

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int main(){
	int n, count=0,ok=0;
	scanf("%d", &n);
	int a[n], b[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(nt(a[i])) ok++;
	}
	
	for(int i=0;i<n;i++){
		if(nt(a[i])==0 && ok==2){
			b[count]=a[i];
			count++;
		}
	}
	for(int i=0;i<count;i++){
		printf("%d ",b[i]);
	}
}
