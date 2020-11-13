/*bai 19 1364A */

#include<stdio.h>
#include<math.h>

int main(){
    int T; 
    scanf("%d", &T);
    while(T--){
    	int a[100000], b[100000], x, i, r, l, n;
        scanf("%d%d", &n,&x);
        for(i=1; i<=n; i++){
            scanf("%d", &a[i]);
    		a[i]=a[i] % x;
            b[i]=a[i];
        }
        a[0]=0;
        for(i=1; i<=n; i++){
            a[i]+=a[i-1];
        }
        if(a[n]%x!=0){
            printf("%d\n", n);
        }
        else{
            r=n;
            while(r>=1 && b[r]%x==0){
                r--;
            }
            r--;
            l=1;
            while(l<=n && b[l]%x==0){
                l++;
            }
            if(n-l > r){
                printf("%d\n",n-l);
            }
            else{
                printf("%d\n", r);
            }
        }
    }
    return 0;
}
