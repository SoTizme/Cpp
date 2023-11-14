#include <iostream>
#include <fstream>
#include <exception>


int main () {
    try
    {
        std::ofstream in("hi");
        if (!in.is_open())
          throw (std::ios_base::failure("hello from the other side"));
        else
          in << "hhhhhhhhh";
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}