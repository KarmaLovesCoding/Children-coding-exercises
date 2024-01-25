#include <iostream>

using namespace std;
void swap(int *a, int *b)
    {
    int temp= *a;
    *a = *b;
    *b = temp;
    }

int main()
{
    int a{};
    cout <<"Nhap gia tri cho a= ";
    cin >> a;
    int b{};
    cout <<"Nhap gia tri cho b= ";
    cin >> b;
    swap(a, b);
    cout <<"a = "<<a<<"\nb = "<<b<< endl;

    return 0;
}