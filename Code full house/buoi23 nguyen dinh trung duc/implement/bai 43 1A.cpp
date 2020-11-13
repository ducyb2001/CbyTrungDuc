/*bai 43 1A */

#include<stdio.h>
#define ll long long
int main()
{
    ll n,m,a;
    scanf("%lld%lld%lld",&n,&m,&a);
    ll i=n/a;
    ll j=m/a;
    if(i*a!=n)
    i++;
    if(j*a!=m)
    j++;
    printf("%lld",i*j);
}
