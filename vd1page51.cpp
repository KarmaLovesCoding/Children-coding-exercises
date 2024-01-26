#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	printf ("\nDay so tu 1 den 10:");
	i= 1;
	
	do
		printf("%d ",i++);
	while (i<=10);
	
	getch();
	return 0;
}
