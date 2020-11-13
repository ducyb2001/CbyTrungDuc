#include<stdio.h>
#include<string.h>

int n,k,a[100];
void init(){
	for(int i=1;i<=k;i++){
		scanf("%d",&a[i]);
	}
}

void sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		i--;
	}
	if(i==0){
		for(int i=1;i<=k;i++){
			printf("%d ",i);
		}
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
		for(int i=1;i<=k;i++){
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&n,&k);
		init();
		sinh();
	}
}
