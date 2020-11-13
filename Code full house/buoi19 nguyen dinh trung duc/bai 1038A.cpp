/*bai 1038A*/

#include<stdio.h>
#include<string.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	getchar();
	char a[1000];
	scanf("%s",a);
	int b[100]={0};
	int min=1e9;
	for(int i=0;i<n;i++){
		int dem=1;
		if(b[i]==0){
			for(int j=i+1;j<n;j++){
				if((a[i]-'A')==(a[j]-'A')){
					dem++;
					b[j]=1;
				}
			}
			if(dem<min){
				min=dem;
			}
		}
	}
	printf("%d",min*3);
}
