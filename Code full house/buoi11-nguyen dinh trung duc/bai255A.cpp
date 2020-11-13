/*bai255A*/
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s1=0,s2=0,s3=0;
	for(int i=0;i<n;i++){
		if(i%3==0){
			s1+=a[i];
		}
		else if(i%3==1){
			s2+=a[i];
		}
		else if(i%3==2){
			s3+=a[i];
		}
	}
	if(s1>s2 && s1>s3){
		printf("chest");
	}
	else if(s2>s1 && s2>s3){
		printf("biceps");
	}
	else if(s3>s1 && s3>s2){
		printf("back");
	}
}
