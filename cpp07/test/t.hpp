#ifndef MYCLASS_HPP
#define MYCLASS_HPP

#include <iostream>

template<typename T>
class MyClass
{
public:
    MyClass();
    void foo(void);
};

#include "t.tpp"

#endif

// template <typename T>
// inline T MyClass<T>::foo(T obj)
// {
//     return T();
// }
