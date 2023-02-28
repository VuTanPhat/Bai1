#include<stdio.h>
#include<conio.h>
#include<time.h>
struct HopSua
{
	char NhanHieu[20];
    float TrongLuong;
     HanSudung;
};
typedef struct HopSua HOPSUA;

void NhapTinh(HOPSUA &hs)
{
 	fflush(stdin);
    printf("Nhap vao nhan hieu: ");
    gets(hs.NhanHieu);
    printf("Nhap han su dung: ");
    scanf("%d", &hs.HanSuDung);
	printf("Nhap vao trong luong: ");
    scanf("%f", &hs.TrongLuong);
}

void XuatTinh(TINH t)
{
    printf("Nhan Hieu: %d\n", hs.NhanHieu);
    printf("Trong luong: %s\n", hs.TrongLuong);
    printf("Han Su Dung: %.2f\n", hs.HanSuDung);
}

int main()
{
    HOPSUA hs;
    NhanHieu(hs);
    TrongLuong(hs);
	HanSuDung(hs)
    getch();
    return 0;
}
