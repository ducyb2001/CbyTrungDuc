/*bai 1*/

//#include<stdio.h>
//int main(){
//	double num1,num2;
//	char op;
//	double result;
//	scanf("%c",&op);
//	scanf("%lf%lf", &num1, &num2);
//	switch(op){
//		case '+': 
//			result=num1+num2;
//			printf("%lf",result);
//			break;
//		case '-':
//			result=num1-num2;
//			printf("%lf",result);
//			break;
//		case '*':
//			result=num1*num2;
//			printf("%lf",result);
//			break;
//		case '/':
//			if(num2==0){
//				printf("Divine by 0");
//			}
//			else {
//				result=num1/num2;
//				printf("%lf",result);
//			}
//			break;
//		default: 
//			printf("op is not supported");
//			break;
//	}
//}

/*bai 2*/

//#include<stdio.h>
//#define ll long long 
//int main(){
//	ll income,tf,pa,pd,ti;
//	int n;
//	pa=9000000;
//	pd=3600000;
//	scanf("%lld",&income);
//	scanf("%d",&n);
//	tf=12*(pa+n*pd);
//	ti=income-tf;
//	if(ti<=0){
//		printf("0");
//	}
//	else if(ti<=5000000){
//		printf("%llf",(float)5*ti/100);
//	}
//	else if(5000001<=ti<=10000000){
//		printf("%llf",(float)10*ti/100);
//	}
//	else if(10000001<=ti<=18000000){
//		printf("%llf",(float)15*ti/100);
//	}
//	else if(ti>18000000){
//		printf("%llf",(float)20*ti/100);
//	}
//}
