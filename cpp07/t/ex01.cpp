#include "../ex01/iter.hpp"

#define MAX_VAL 750
class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print2( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  // int tab[] = { 0, 1, 2, 3, 4 };
  char d[6] = "souad";
  // Awesome tab2[5];

  iter( d, 5, print2<char> );
  // iter( tab, 5, print2<const int> );
  // iter( tab2, 5, print2<Awesome> );

  return 0;
}
