/* hinh vuong rong */

#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
}

/* chu Z */

//#include<stdio.h>
//int main(){
//	int i,j,n;
//	scanf("%d", &n);
//	for (i=1; i<=n; i++){
//		for(j=1; j<=n;j++){
//			if(i==1 || i==n || i==j){
//				printf("* ");
//			}
//			else printf("  ");
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main(){
//	int i,j,n;
//	scanf("%d", &n);
//	for(i=1;i<=n;i++){
//		for(j=1; j<=n;j++){
//			if(i==1 || i==n || i+j==n+1) printf("* ");
//			else printf("  ");
//		}
//		printf("\n");
//	}
//}

/*hinh dong ho cat */

//#include<stdio.h>
//int main(){
//	int i,j,n;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++){
//		for(j=1;j<=n;j++){
//			if(i==1||i==n||i==j||i+j==n+1){
//				printf("* ");
//			}
//			else printf("  ");
//		}
//		printf("\n");
//	}
//}

/* dong ho cat + hvuong */

//#include<stdio.h>
//int main(){
//	int i,j,n;
//	scanf("%d", &n);
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n;j++){
//			if(i==1 || i==j|| j==1 || j==n || i==n|| i+j==n+1)
//			printf("* ");
//			else printf("  ");
//		}
//		printf("\n");
//	}
//}

