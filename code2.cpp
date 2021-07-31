#include <stdio.h>
#include <string.h>


struct HoTen {
	char ho[20];
	char dem[20];
	char ten[20];
};
struct SinhVien {
	int ma;
	struct HoTen hoVaTen;
	int tuoi;
	char gioiTinh[10];
//	struct diemmh tong;	
};
//struct diemmh {
//	float toan;
//	float ly;
//	float hoa;
//};
/*
struct nhapdiemmh (struct diemmh*diem)
{
	 printf ("diem mon toan");
	 scanf ("%f",tong->toan);
	 printf ("diem mon ly");
	  scanf ("%f",tong->ly);
	printf ("diem mon hoa");
	 scanf ("%f",tong->hoa);
	
}*/
void nhapHoTen(struct HoTen* ten) {
	printf("Ho: ");
	scanf("%s", ten->ho);
	printf("Dem: ");
	getchar();
	gets(ten->dem);
	printf("Ten: ");
	scanf("%s", ten->ten);
}

struct SinhVien nhapSV() {
	struct SinhVien sv;
	printf("Nhap ma: ");
	scanf("%d", &sv.ma);	
	nhapHoTen(&sv.hoVaTen);
	printf("Tuoi: ");
	scanf("%d", &sv.tuoi);
	printf("Gioi tinh: ");
	scanf("%s", sv.gioiTinh);
	return sv;
}



int main() {
	struct SinhVien  dssv[100];
  	int slsv=0;
  	struct SinhVien sv;
 	sv=nhapSV();
  	dssv[slsv++]=sv;
  	printf  ("------------------thong tin sinh vien ------------------------");
  	printf ("ma: %d",sv.ma);
  	printf ("\nho:%s",sv.hoVaTen.ho);
  	printf ("\nten %s",sv.hoVaTen.ten);
  	printf ("\ntuoi: %d", sv.tuoi);
  	printf ("\ngioi tinh %s",sv.gioiTinh);
  	printf ("-------------------diem mon hoc-----------------------------");
  	return 0;
  }
