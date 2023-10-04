#include <iostream>


int main()
{
    int i = 55;
    int& j = i;
    int h = 99;
    std::cout << j << std::endl;
    j = 88;
    std::cout << i << std::endl;
    j = h;
    std::cout << i << std::endl;

}