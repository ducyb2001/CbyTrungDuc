/* bai 22 762A*/

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll solve (ll n,int k){
	ll uoc[n];
	int dem=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			uoc[dem]=i;
			dem++;
			if(i!=n/i){
				uoc[dem]=n/i;
				dem++;
			}
		}
	}
	sort(uoc,uoc+dem);
	if(k>dem)
		return -1;
	else return uoc[k-1];
}

int main(){
	ll n;
	int k;
	scanf("%lld%d", &n, &k);
	printf("%lld", solve(n,k));
	return 0;
}
