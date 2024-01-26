#include <stdio.h>
#include <conio.h>

int main()
{
	int a= 667;
	int b= 7028;
	
	if (a == 667)
	{
		a=1;
		if (b == 7028 && a == 667)
		{
			b=1;
			printf("\nGia tri cua a la 667 va b la 7028");
		}
		else
		{
			a= 667;
			printf ("\nGia tri cua a la %d va b la %d", a, b);
		}

	}
	printf("\nGia tri chinh xac cua a la %d",a);
	printf("\nGia tri chinh xac cua b la %d",b);
	
	getch();
	return 0; 
}
