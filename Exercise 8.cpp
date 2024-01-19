#include "stdio.h"
#include "conio.h"

int main()
{
	int op1, op2, sum;
	
	printf("Nhap op1= "); scanf("%d",& op1);
	printf("Nhap op2= "); scanf("%d",& op2);
	
	sum = op1 + op2;
	
	printf("%d + %d = %d", op1, op2, sum);
	
	getch();
	return 0;
}
