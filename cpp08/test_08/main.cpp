#include <iostream>
#include <stack>

int main ()
{
  std::stack<int, std::stack<int> > st;
  st.push(56); 
  st.push(44);
  st.push(5);


  return 0;
}