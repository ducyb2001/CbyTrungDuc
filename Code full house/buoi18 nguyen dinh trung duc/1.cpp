#include <stdio.h>

//rb: Mo file len de doc
//wb: Mo file len de ghi
//ab: Mo file len de ghi tiep vao file
//
//fseek(f,10,SEEK_SET)
//SEEK_SET: Tu dau file
//SEEK_END: Tu cuoi file
//SEEK_CUR: Vi tri hien tai
//
//fseek(f,0,SEEK_END);
//
//ftell(f): Tu vi tri dau file toi vi tri hien tai cua con tro tri vi la bao nhieu byte
//
//fwrite(&x,50,1,f): ghi struct x vao trong file, struct x co kich thuoc la 50 byte, so luong struct ghi vao trong file la 1
//fread(&x,50,1,f): 

//fopen("ten file", "mode")
//fclose(f)

typedef struct{
	int ma;//4 byte
	char ten[100];//100 byte
	float nhap,xuat;//8 byte
}sanpham;

int size=sizeof(sanpham);//size=112

//Kiem tra trong file dang co bao nhieu san pham

int dem(){
	FILE *f=fopen("abd.bin","rb");
	//dua con tro tri vi ve cuoi file
	fseek(f,0,SEEK_END);
	int ans=ftell(f)/size;
	fclose(f);
	return ans;
}
// Ghi them n san pham vao file

void them(int n){
	int cnt=dem();	
	FILE *f=fopen("abd.bin","ab");
	for(int i=1;i<=n;i++){
		sanpham tmp;
		tmp.ma=cnt+i;
		while(getchar()!='\n');
		gets(tmp.ten);
		scanf("%f%f",&tmp.nhap,&tmp.xuat);
		fseek(f,0,SEEK_END);
		fwrite(&tmp,size,1,f);
	}
	printf("%d\n",n);
	fclose(f);
}

//sua san pham theo ma

void sua(int n){
	FILE *f=fopen("abd.bin","rb+");
	sanpham tmp;
	tmp.ma=n;
	while(getchar()!='\n');
	gets(tmp.ten);
	scanf("%f%f",&tmp.nhap,&tmp.xuat);
	fseek(f,(n-1)*size,SEEK_SET);
	fwrite(&tmp,size,1,f);
	fclose(f);
}

void hienthi(){
	FILE *f=fopen("abd.bin","rb");
//	int n=dem();//so luong san pham co trong file
//	for(int i=1;i<=n;i++){
//		sanpham tmp;
//		fread(&tmp,size,1,f);
//		if(tmp.xuat-tmp.nhap>tmp.nhap){
//			printf("%d %s %.2f %.2f\n",tmp.ma,tmp.ten,tmp.nhap,tmp.xuat);
//		}
//	}
	sanpham tmp;
	while(fread(&tmp,size,1,f)!=0){
		printf("%d %s %.2f %.2f\n",tmp.ma,tmp.ten,tmp.nhap,tmp.xuat);
	}
	fclose(f);
}


int main(){
	int lc;
	scanf("%d",&lc);
	if(lc==1){
		int n;
		scanf("%d",&n);
		them(n);
	}
	else if(lc==2){
		int n;
		scanf("%d",&n);
		sua(n);
	}
	else
		hienthi();
	return 0;
}
