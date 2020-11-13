#include<stdio.h>
#include<string.h>

int n,a[100],ok;
// cau hinh ban dau, n so 0
void init(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}

// ham sinh xau ke tiep

void next(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0){
		ok=0; // cau hinh cuoi cung
	}
	else{
		a[i]=1;
	}
}

void in(){
	for(int i=1;i<=n;i++){
		printf("%d",a[i]);
	}
	printf(" ");
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		init();
		ok=1;
		while(ok){
			in();
			next();
		}
		printf("\n");
	}
}
