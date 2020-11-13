/*bai 23 1166B*/

#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char a[100][100];
	char t[5] ={ 'a','e','i','o','u' };
	int k;
	scanf("%d",&k);
	int x=0;
	int n,m;
	for(int i=5; i<=sqrt(k); i++){
		if (k%i==0 && i>=5) {
			x=1;
			n=i;
			m=k/i;
		}
	}
	if(x==0) printf("-1\n");
	else{
		int dem=0;
		for(int i=0; i<n; i++){
			dem++;
			for(int j=0; j<m; j++){
				a[i][j]=t[dem % 5];
				dem++;
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				printf("%c",a[i][j]);
			}
		}
	}
	return 0;
}
