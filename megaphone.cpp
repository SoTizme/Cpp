#include <iostream>
   
namespace scope {
	void to_uper(char *s){
		for (int i = 0; s[i] ; i++)
			std::cout << (char)toupper(s[i]);
		std::cout << " ";
	}
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else{
		for (int j = 1; j < ac; j++)
			scope::to_uper(av[j]);
		std::cout << "\n";
	}
}
