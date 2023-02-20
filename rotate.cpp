#include <iostream>

void rotate(int &x, int &y ,int &z)
{
    x=x+y+z;
    y=x-(y+z);
    z=x-(y+z);
    x=x-(y+z);
    
}

int main()
{
    int a,b,c;
    a=5; b=7; c=8;
    std::cout << "Before : a = "<<a<<" b = "<<b<<" c = "<<c<<std::endl;
    rotate(a,b,c);
    std::cout << "After : a = "<<a<<" b = "<<b<<" c = "<<c;
}