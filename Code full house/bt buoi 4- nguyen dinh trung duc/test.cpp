#include<stdio.h>
bool giam(int n);
bool tang(int n);
int check(int n);
int main(){
	int n;
	printf("nhap n: "); scanf("%d", &n);
	if(check(n)==1)
		printf("Co thu tu");
	else
		printf("Khong co thu tu");
	return 0;
}
bool giam(int n){
	while (n>=10)
{
        int donvi=n%10;
        n=n/10;
        if(donvi>n%10)
        {
            return false;
        }
}
return true;
}
bool tang(int n){
	while (n>=10)
{
        int donvi=n%10;
        n=n/10;
        if(donvi<n%10)
        {
            return false;
        }
}
	return true;
}
int check(int n){
	int m;
	m=n%10;
	n=n/10;
	if(m!=n%10)
		{
		if(m>n%10)
			if(tang(n)==true)
				return 1;
			else
				return 0;
		else
			if(giam(n)==true)
				return 1;
			else
				return 0;
		}
	else
		check(n);
}



