/*bai 10 phan btcoban*/
#include <stdio.h>
int main()
{
    int f0 = 0;
    int f1 = 1;
    int fn = 0;
    int i,n,sum;
    scanf ("%d", &n);
    if (n>1) printf ("0");
    for (i = 1; i < n; i++) {
        f0 = f1;
        f1 = fn;
        fn = f0 + f1;
        sum+=fn;
        printf ("%2d", fn);
        }
        printf ("\n%2d", sum);
        return 0;
}
