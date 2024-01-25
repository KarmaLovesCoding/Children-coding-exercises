#include <bits/stdc++.h>
#include <math.h>
#define PI 3.14
using namespace std;
int main()
{
	float S{};
	
	std::cout <<"Dien tich cua mat cau S= ";
	std::cin >>S;
	
	float r= sqrt(S/(4*PI));
	float V= (4/3)*PI*(r*r*r);
	
	std::cout <<"Ban kinh cua hinh tron la: "<<setprecision(2)<<fixed<<r << '\n';
	std::cout <<"The tich cua hinh cau la: " <<setprecision(2)<<fixed<<V << '\n';
	
	return 0;
}