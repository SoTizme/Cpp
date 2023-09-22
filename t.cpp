
#include <bits/stdc++.h>
  
int main(int ac, char **av)
{
    int j = 0;
    while (++j < ac)
	{
        std::string s1 = av[j];
        std::transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
        std::cout<<s1<< "\n";
    }
    return 0;
}