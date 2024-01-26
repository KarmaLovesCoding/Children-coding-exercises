#include <stdio.h>


int main ()
{
	char hocluc= 'B';
	
	switch(hocluc)
	{
	case 'A' :
		printf ("\nXuat sac!");
		break;
	case 'B' :
		printf ("\nGioi!");
		break;
	case 'C' :
		printf ("\nKha!");
		break;
	case 'D' : 
		printf ("\nTrung binh!");
		break;
	case 'E' :
		printf ("Chuc mung ban hoc lai!");
		break;
	default :
		printf ("\nDu lieu ban nhap khong hop le!");		
	}
	
	printf ("\nHoc luc cua sinh vien la %c",hocluc);
	
	return 0;
}
