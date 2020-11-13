// mang doi xung 

#include<stdio.h>
#include<math.h>
int doiXung(int a[], int n){
	int l=0, r=n-1;
	while(l<=r){
		if (a[l]!=a[r]){
			return 0;
		}
		l++;
		r--;
	}
	return 1;
}

void sieve(int n){
	int prime[n+1];
	for(int i=0;i<=n;i++){
		prime[i]=1;
	}
	prime[0]=0;
	prime[1]=0;
	for(int i=2;i<=sqrt(n);i++){
		if (prime[i]){
			for(int j=i*i; j<=n;j+=i){
				prime[j]=0;
			}
		}
	}
	for(int i=0;i<=n;i++){
		if(prime[i]) printf("%d ", i);
	}
}

void selectionSort(int a[], int n){
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		int tmp=a[i];
		a[i]=a[min];
		a[min]=tmp;
	}
}

void interchangeSort(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=1;j<n;j++){
			if(a[j]<a[i]){
				tmp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	sieve(10001);
	return 0;
}
