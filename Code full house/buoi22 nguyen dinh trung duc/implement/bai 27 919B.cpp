#include<stdio.h>
  
int check(int n) 
{ 
    int count=0; 
    for(int i=19;;i+=9) { 
        int sum=0; 
        for(int x=i; x>0; x=x/10) 
            sum+=x%10; 
        if(sum==10) 
            count++; 
        if(count==n) 
            return i; 
    } 
    return -1; 
} 
  
int main() {
	int n;
	scanf("%d",&n);
    printf("%d\n", check(n)); 
    return 0; 
} 
