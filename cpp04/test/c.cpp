#include <iostream>

class Shape {
    int i;
    std::string s;

public:

	// Shape(){
	// 	std::cout << "Shape Destuctor Call \n";
	// }

    // Shape(int j){
    //     i = j;
	// 	std::cout << "Shape  Paramitriz Destuctor Call \n";
	// }

    void print(){
        std::cout << s << std::endl;
    }

};


int main(){
    Shape a;
    a.print();
}