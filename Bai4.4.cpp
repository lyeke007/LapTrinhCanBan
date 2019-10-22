#include	<stdio.h>
void NhapMang(int a[], int n)
{
	for(int i = 0; i < n ; i++)
	{
		printf("\n Nhap phan tu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int a[], int n)
{
	for(int i = 0; i < n; i++)	
		printf("%5d", a[i]);
}

int TinhTongLe(int a[], int n)
{
	int tongLe = 0;
	for(int i=0; i<n; i++)
		if(a[i] % 2 != 0)
			tongLe = tongLe + a[i];
	return tongLe;
}
float TBCong(int a[],int n)
{
	int tong = 0;
	for(int i=0;i<n;i++)
		tong= tong + a[i];
	 float tbc = (float)tong/n ;
	return tbc;
}

int TimSoNhoNhat(int a[], int n)
{
	int min = a[0];
	for(int i = 1; i<n; i++)
		if(a[i] < min)
			min = a[i];
	return min;
}

int main()
{
	int mangSoNguyen[100], soPhanTu, tongLe, soNhoNhat ;
	printf("\n Nhap so phan tu: ");
	scanf("%d", &soPhanTu);
	NhapMang(mangSoNguyen, soPhanTu);
	printf("\n Cac gia tri vua nhap la: ");
	XuatMang(mangSoNguyen, soPhanTu);
	tongLe = TinhTongLe(mangSoNguyen, soPhanTu);
	printf("\n Tong cac so le trong mang la: %d", tongLe);
	soNhoNhat = TimSoNhoNhat(mangSoNguyen, soPhanTu);
	printf("\n Phan tu nho nhat trong mang la: %d", soNhoNhat);
	printf("\n trung binh cong cua man la: %f", TBCong(mangSoNguyen, soPhanTu));
	
	return 0;
}
