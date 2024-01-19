#include "stdio.h"
#include "conio.h"

int main()
{
	int op1, op2, sub;
	
	printf("Nhap op1= "); scanf("%d",& op1);
	printf("Nhap op2= "); scanf("%d",& op2);
		
	sub= op1 - op2;
	
	printf("%d -%d = %d", op1, op2, sub);
	
	getch();
	return 0;
}
