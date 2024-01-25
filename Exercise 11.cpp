#include "stdio.h"
#include "conio.h"

int main()
{
	int a, b, chuvi, dientich;
	
	printf("Nhap chieu dai = "); scanf("%d", & a);
	printf("Nhap chieu rong = "); scanf("%d", & b);
	
	chuvi= (a+b)/2;
	dientich= a*b;
	
	printf("Chu vi hinh chu nhat voi chieu rong %d va chieu dai %d la: %d\n", a, b, chuvi);
	printf("Dien tich hinh chu nhat voi chieu rong %d va chieu dai %d la: %d\n", a, b, dientich);
	
	getch();
	return 0;	
}
