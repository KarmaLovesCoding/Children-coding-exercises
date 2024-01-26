#include <stdio.h>
#include <conio.h>

int main()
{
	int bien_nguyen= 1234,i= 65;
	float bien_thuc= 123.456703;
	
	printf("Gia tri nguyen cua bien nguyen la %d\n",bien_nguyen);
	printf("Gia tri thuc cua bien thuc la %f\n",bien_thuc);
	
	printf("Truoc khi lam tron= %f \nSau khi lam tron %.2f",bien_thuc, bien_thuc);
	
	getch();
	return 0;
}
