#include <iostream>

int main()
{
	int nam;
	std::cout <<"Nhap 1 nam: ";
	std::cin >> nam;
	
	if(nam % 4 ==0 && nam % 100 !=0 ||nam % 400 ==0 )
	{
		std::cout <<nam<< " la nam nhuan";
	}
	else
	{
		std::cout <<nam<< " khong la nam nhuan";
	}
	return 0;
}
