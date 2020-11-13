/*struc*/

#include<stdio.h>
//C1
//struct TEN_STRUCT{
//	// danh sach cac thuoc tinh
//};
//
//struct sinhvien{
//	char ma[100];
//	char ten[100];
//	float toan, ly, hoa;
//};
//
//
//typedef struct sinhvien SV;

//C2

//typedef struct{
//	char ma[100];
//	char ten[100];
//	float toan,ly, hoa;
//}SV;
//
//// thuat toan
//
//void nhap(SV *a){
//	printf("Nhap ma: ");
//	scanf("%s",&a->ma);
//	getchar();
//	printf("Nhap ten: ");
//	gets(a->ten);
//	printf("Diem tb: ");
//	scanf("%f",&a->toan);
//}
//
//void nhapdanhsach(SV a[],int n){
//	for(int i=0;i<n;i++){
//		nhap(&a[i]);
//	}
//}


//int main(){
//	SV a;
//	printf("Nhap ma: \n");
//	scanf("%s",&a.ma);
//	printf("Nhap ten: \n");
//	getchar();
//	gets(a.ten);
//	printf("Nhap diem:\n");
//	scanf("%f%f%f",&a.toan, &a.ly, &a.hoa);
//	printf("Ten sinh vien: %s",a.ten);
//}


						// nhap xuat danh sach sinh vien va diem trung binh 


//typedef struct{
//	char ma[100];
//	char ten[100];
//	float diemtb;
//}SV;
//
//void nhap(SV *a){
//	printf("Nhap ma: ");
//	scanf("%s",&a->ma);
//	getchar();
//	printf("Nhap ten: ");
//	gets(a->ten);
//	printf("Diem tb: ");
//	scanf("%f",&a->diemtb);
//}
//
//void nhapdanhsach(SV a[],int n){
//	for(int i=0;i<n;i++){
//		nhap(&a[i]);
//	}
//}
//
//void in(SV a){
//	printf("----------------\n");
//	printf("Ma: %s\n", a.ma);
//	printf("Ten: %s\n", a.ten);
//	printf("Diem: %.2f\n",a.diemtb);
//	printf("----------------\n");
//}
//
//void indanhsach(SV a[], int n){
//	for(int i=0;i<n;i++){
//		in(a[i]);
//	}
//}
//
//int main(){
//	int n;
//	printf("Nhap so luong sinh vien\n");
//	scanf("%d",&n);
//	SV a[n];
//	nhapdanhsach(a,n);
//	indanhsach(a,n);
//}


				// sap xep danh sach cac sinh vien theo diem trung binh
				
//typedef struct{
//	char ma[100];
//	char ten[100];
//	float diemtb;
//}SV;
//
//void nhap(SV *a){
//	printf("Nhap ma: ");
//	scanf("%s",&a->ma);
//	getchar();
//	printf("Nhap ten: ");
//	gets(a->ten);
//	printf("Diem tb: ");
//	scanf("%f",&a->diemtb);
//}
//
//void nhapdanhsach(SV a[],int n){
//	for(int i=0;i<n;i++){
//		nhap(&a[i]);
//	}
//}
//
//void in(SV a){
//	printf("----------------\n");
//	printf("Ma: %s\n", a.ma);
//	printf("Ten: %s\n", a.ten);
//	printf("Diem: %.2f\n",a.diemtb);
//	printf("----------------\n");
//}
//
//void indanhsach(SV a[], int n){
//	for(int i=0;i<n;i++){
//		in(a[i]);
//	}
//}
//
//void sx(SV a[], int n){
//	for(int i=0;i<n;i++){
//		int max=i;
//		for(int j=i+1;j<n;j++){
//			if(a[j].diemtb>a[max].diemtb){
//				max=j;
//			}
//		}
//		SV tmp=a[max];
//		a[max]=a[i];
//		a[i]=tmp;
//	}
//}
//
//		// in ra sinh vien co diem trung binh >= 8
//
//void svgioi(SV a[], int n){
//	for(int i=0;i<n;i++){
//		if(a[i].diemtb>=8){
//			in(a[i]);
//		}
//	}
//}
//int main(){
//	int n;
//	printf("Nhap so luong sinh vien\n");
//	scanf("%d",&n);
//	SV a[n];
//	nhapdanhsach(a,n);
//	indanhsach(a,n);
//	printf("\n");
////	sx(a,n);
////	indanhsach(a,n);
//
////***************************************************
//	svgioi(a,n);
//}


// tim kiem sinh vien co ma so ban dau giong 
//char* strstr(char dich[], char goc[])
//
//void timkiem(SV a[],int n, char x[]){
//	for(int i=0;i<n;i++){
//		if(strstr(a[i].ma,x)!=NULL){
//			in(a[i]);
//		}
//	}
//}

// sinh vien co ma ten, nam sinh, ngay thang 

struct namsinh{
	int ngay, thang, nam;
};

struct sv{
	int ma;
	char ten[100];
	struct namsinh n;
};

int main(){
	struct sv a;
	a.n.ngay;
	a.n.thang;
	a.n.nam;
	return 0;
}
