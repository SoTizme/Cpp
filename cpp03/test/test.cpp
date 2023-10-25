#include <iostream>

class Parent { 
    protected :
        int j;
    public:
        void set(int i){
            j = i;
        }
        void get(){
            std::cout << j << std::endl;
        }
}; 

class Child : protected Parent {
    public:
        int id_c;
        void get_par_priv(){
            get();
        }
}; 

int main() 
{ 
    Child obj1; 

    // obj1.get();
    obj1.get_par_priv();
    // obj1.id_p = 91;
    // std::cout << "Child id is: " << obj1.get() << '\n'; 
    // std::cout << "Parent id is: " << obj1.id_p << '\n'; 
  
    return 0; 
}