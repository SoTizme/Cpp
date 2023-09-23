#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
   std::cout << "............................\n";
   std::cout << "Welecome To Your PhoneBook\n";
   std::cout << "............................\n";
}

PhoneBook::~PhoneBook(void)
{
   std::cout << "............................\n";
   std::cout << "..........Good by...........\n";
   std::cout << "............................\n";
}

// void  welecome::welecoming(void)
// {
//    std::string str;
//    std::cout << "............................................\n";
//    std::cout << "If you want to Save a contact Use this : ADD\n";
//    std::cout << "If you want to Serch for a contact Use this : SEARCH\n";
//    std::cout << "If you want to Quits Use this : EXIT\n";
//    std::cout << "............................................\n";
//    std::cout << "Tap your command >>";
//    std:: cin >> str;
//    if (str.compare("ADD") == 0)
//       welecome::ft_add();
//    else if (str.compare("SEARCH") == 0)
//       std :: cout << "SEARCH\n";
//    else if (str.compare("EXIT") == 0)
//       exit(1);
// }

void  welecome::ft_add(void){
   std :: cout << "Enter Full name\n";
}


int main()
{
   welecome h;

   while (1)
      h.welecoming();
}