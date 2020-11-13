/*bai 5*/
#include<stdio.h>
#include<string.h>

int i,n,k,ok,a[100];

// tao cau hinh dau
void init(){
	int cnt=1;
	for(i=1;i<=k;i++){
		a[i]=cnt++;
		printf("%d",a[i]);
	}
	printf(" ");
}
void sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		i--;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
		for(int i=1;i<=k;i++){
			printf("%d",a[i]);
		}
		printf(" ");
	}
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&n,&k);
		init();
		ok=1;
		while(ok){
			sinh();
		}
		printf("\n");
	}
}
