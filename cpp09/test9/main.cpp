#include <iostream>
 
void split(std::string line){
    for (size_t i = 0; i < line.size(); i++){
        size_t j = line.find('|');
        line.erase(j, 1);
        std::cout << line << std::endl;
    }
}
 
int main() {
 
    std::string str = "geeks_for_geeks";
     char del = '_';
   
    split(str);
     
    return 0;
}