#include "../ex02/Array.hpp"

#include <iostream>

#define MAX_VAL 750
int main(int, char**)
{
    Array<char> numbers(MAX_VAL);
    char* mirror = new char[MAX_VAL];
    srand(time(NULL));
    char a = 'a';
    for (int i = 0; i < MAX_VAL; i++){
        numbers[i] = a;
        mirror[i] = a;
        a++;
        if (a > 'z')
            a = 'a';
    }
    //SCOPE
    {
        Array<char> tmp = numbers;
        Array<char> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++){
        if (mirror[i] != numbers[i]){
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    try{
        numbers[-2] = 0;
    }
    catch(const char* e){
        std::cerr << e << '\n';
    }
    try{
        numbers[MAX_VAL] = 0;
    }
    catch(const char* e){
        std::cerr << e << '\n';
    }
    for (int i = 0; i < MAX_VAL; i++){
        std::cout << numbers[i] << " ";
    }
    std::cout << "\n";
    delete [] mirror;
    return 0;
}