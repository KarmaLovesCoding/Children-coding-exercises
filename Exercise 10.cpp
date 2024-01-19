#include "stdio.h"
#include "conio.h"

int main()
{
	int op1, op2, div;
	
	printf ("Nhap op1= "); scanf ("%d",& op1);
	printf ("Nhap op2= "); scanf ("%d",& op2);
	
	div= op1/op2;
	
	printf("Thuong cua %d va %d la: %d", op1, op2, div);
	
	getch();
	return 0;
}
