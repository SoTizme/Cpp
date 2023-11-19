#include <iostream>

// // CPP Program to demonstrate Conversion Operators 
// #include <cmath> 
// #include <iostream> 
// using namespace std; 

// class Complex { 
// private: 
// 	double real; 
// 	double imag;
// 	int k;

// public: 
// 	Complex(double r, double i, int j) : real(r), imag(i) , k(j){ 
// 	} 

// 	// magnitude : usual function style 
// 	double mag() { return real; } 

// 	// magnitude : conversion operator 
// 	operator double() { return real;}
// 	operator int() { return k; } 
// }; 

// int main() 
// { 
// 	Complex com(3.2, 4.0, 55); 

// 	cout << com.mag() << endl;
// 	int a = static_cast<int>(com);
// 	cout << a << endl; 
// }

// class Y {
//   public:
// 	virtual ~Y() {
// 	  std::cout << "hiii\n";
// 	};
// };

// class Z : public Y{
// };

// class B : public Y{
// };

// int main() {
	
// 	try{
// 		Z *obj = new Z;
// 		Z &ref = *obj;
// 		B &check1 = dynamic_cast<B&>(ref);
// 	}
// 	catch(std::bad_cast &e){
// 		std::cout << e.what() << std::endl;
// 	}
// }

// class A {
//   int a_int;
//   char* a_carp;
// public:
//   operator int() { return a_int; }
//   operator char*() { return a_carp; }
// };

// class B : public A {
//   float b_float;
//   char* b_carp;
// public:
//     void set(char *s, float k){
//         b_carp = s;
//         b_float = k;
//     }
//   operator float() { return b_float; }
//   operator char*() { return b_carp; }

// };

// int main () {
//   B b_obj;
//   b_obj.set((char *)"hiii", 45.4f);
//   char* c_p = static_cast<char*>(b_obj);
//   float j = b_obj;

//   std::cout << c_p << std::endl;
//   std::cout << j << std::endl;
// }

// class par{
//     public:
//     // par(){
//     //     std::cout << "hello from parrent" << std::endl;
//     // }
//     virtual ~par(){};
//     void print(){
//         std::cout << "function from parrent" << std::endl;
//     }
// };

// class child1 : public par{
//     public :
//         // child1(){
//         //     std::cout << "hello from child" << std::endl;
//         // }
//     void print1(){
//         std::cout << "function from parrent" << std::endl;
//     }
// };

// class child2 : public par{
//     public :
//         // child2(){
//         //     std::cout << "hello from child1" << std::endl;
//         // }
//     void print2(){
//         std::cout << "function from child2" << std::endl;
//     }
// };

// int main()
// {

//     // child1 a;
//     // par *g = &a;
//     // child1 *c = (child1*)(g);
//     par l;
//     child1 a = (child1)l; 
//     // c->print();

// // -------------------------------------------------------------------------------------------------------------
//     // int a = 55;
//     // float k = 3.58459;

//     // double b = a;
//     // int c = b;
//     // c = k;
//     // int d = static_cast<int>(b);
//     // d = static_cast<int>(k);
//     // std::cout << d << std::endl;
//     // std::cout << c << std::endl;

// //  ------ this case not allowed, the static_cast work with implicit and user_defined convertion 
//     // std::string j = "hilal";
//     // int d = static_cast<int>(j); 

//     return 0;
// }


int main(){

   // int i = 50;          // 00000000 00000000 00000000 00000000 00110010
    int j = 555481135; //  00000000 00100001 00011011 11111000 00101111
    char *c = "zzzz";  //   01000001 01000001 01000001 01000001 01000001


    int *i = reinterpret_cast<int*>(c);

    //1094795585
    //2054847098
    std::cout << *i <<std::endl;
}