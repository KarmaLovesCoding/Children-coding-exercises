#include "stdio.h"
#define PI 3.14

int main ()
{
	
	float r,chuvi=0,dientich=0;  
	
	printf ("Ban kinh cua hinh tron la: "); scanf ("%f",& r);
	
	chuvi= r*2*PI;
	dientich= PI*(r*r);
	
	printf("Chu vi cua hinh tron voi ban kinh %1.2f la: %2.2f \n", r, chuvi);
	printf("Dien tich cua hinh tron voi ban kinh %1.2f la: %2.2f", r,dientich);
	
	return 0;
}
