/*bai 1 */
#include<stdio.h>

typedef struct{
	int ma, loai; // 8byte
	char ten[100]; // 100byte
	int tien; // 4byte
} chitieu;

//112 byte
int size=sizeof(chitieu);

// dem xem dang co bao nhieu san pham.
int dem(){
	FILE *f=fopen("duc.bin","rb");
	// dua con tro ve vi tri cuoi file
	fseek(f,0,SEEK_END);
	int ans=ftell(f)/size;
	fclose(f);
	return ans;
}

void them(int n){
	int cnt = dem();
	int cnt1=0,cnt2=0;
	FILE *f=fopen("duc.bin","ab");
	for(int i=1;i<=n;i++){
		chitieu tmp;
		tmp.ma=cnt+i;
		scanf("%d",&tmp.loai);
		while(getchar() != '\n');
		gets(tmp.ten);
		scanf("%d", &tmp.tien);
		if(tmp.loai==1){
			cnt1++;
		}
		else if(tmp.loai==2){
			cnt2++;
		}
		fseek(f,0,SEEK_END);
		fwrite(&tmp,size,1,f);
	}
	printf("%d %d\n", cnt1, cnt2);
	fclose(f);
}

void sua(int n){
	FILE *f=fopen("duc.bin","rb+");
	chitieu tmp;
	tmp.ma=n;
	scanf("%d", &tmp.loai);
	while(getchar()!='\n');
	gets(tmp.ten);
	scanf("%d",&tmp.tien);
	fseek(f,(n-1)*size,SEEK_SET);
	fwrite(&tmp,size,1,f);
	printf("%s", tmp.ten);
	fclose(f);
}

void hienthi(){
	FILE *f=fopen("duc.bin", "rb");
	chitieu tmp;
	int n=dem();//so luong san pham co trong file
	int tongthu=0,tongchi=0;
	for(int i=1;i<=n;i++){
		chitieu tmp;
		fread(&tmp,size,1,f);
		if (tmp.loai==1){
            tongthu+=tmp.tien;
		}
		else tongchi+=tmp.tien;
	}
	printf("%d %d %d\n",tongthu,tongchi,tongthu-tongchi);
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

