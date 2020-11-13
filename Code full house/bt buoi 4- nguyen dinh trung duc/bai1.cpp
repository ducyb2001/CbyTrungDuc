/*bai 1 tim so dep*/

//#include<stdio.h>
//#include<math.h>
//int snt(int n){
//int i;
//for(i=2;i<=sqrt(n);i++){
//	if(n%i==0){
//       return 0;
//	}
//}
//if(n>1){
//	return 1;
//	}
//}
//
//int chusoNT (int n){
//int a=0;
//while(n!=0){
//	a=n%10;
//	n/=10;
//	if(snt(a)!=1)
//	return 0;
//}
//	return 1;
//}
//int tong(int n){
//int sum=0;
//while(n!=0){
//sum+=n%10;
//n/=10;
//}
//return sum;
//}
//
//int main(){
//int x,y;
//scanf("%d %d",&x,&y);
//int i;
//int dem=0;
//for(i=x;i<=y;i++){
//	if(snt(i)&&chusoNT(i)&&snt(tong(i))){
//			dem++;
//	}
//}
//printf("%d",dem);
//return 0;
//}

#include<stdio.h>
#include<math.h>
int snt(int n){
	int i;
	for (i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	if (n>1) return 1;
	return 0;
}

int csngto(int n){
	int a;
	while(n>0){
		a=n%10;
		n/=10;
		if(snt(a)!=1) return 0;
	}
	return 1;
}

int tong(int n){
	int sum=0;
	while(n!=0){
	sum+=n%10;
	n/=10;
	}
	return sum;
}

int main(){
int a,b;
scanf("%d %d",&a,&b);
int i;
int dem=0;
for(i=a;i<=b;i++){
	if(snt(i)&&csngto(i)&&snt(tong(i))){
			dem++;
	}
}
	printf("%d", dem);
}
