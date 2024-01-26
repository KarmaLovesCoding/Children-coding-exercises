#include <stdio.h>

int main()
{
	int a;
	printf("Gia tri cua a= ");scanf("%d",&a);
	
	if (a < 20)
	{
		printf ("%d nho hon 20\n",a);
	}
	else if (a>20)
	{
		printf ("%d khong lon hon 20\n",a);
	}
	else
	{
		printf("%d bang 20\n",a);
	}
	printf("Gia tri cua a la %d\n",a);
	
	return 0;
}
