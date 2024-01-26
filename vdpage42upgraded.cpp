#include <stdio.h>

int main()
{
	int a,b;
	printf ("Gia tri cua a= ");scanf("%d", &a);
	printf ("Gia tri cua b= ");scanf("%d", &b);
	
	if (a>b)
	{
		printf("%d lon hon %d\n",a,b);
		
	}
	else if (a<b)
	{
		printf("%d nho hon %d\n",a,b);
	}
	else
	{
		printf("a bang b\n");
	}
	printf("Gia tri cua a la %d va b la %d",a,b);
	
	return 0;
}
