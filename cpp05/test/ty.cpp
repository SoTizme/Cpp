#include <iostream>
#include <fstream>
#include <exception>

// #define throw(runtime_error, logic_error)
// #define throw(runtime_error)
// #define throw(logic_error)

void hi(std::string s) throw(std::exception){
   std::cout << "hiiii from the function " << s << std::endl;
    throw(std::runtime_error("hello sdf"));
}

int main () {
    try
    {
       hi("hello");
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (...)
    {
      std::cout << "fjjfds" << std::endl;

    }
}