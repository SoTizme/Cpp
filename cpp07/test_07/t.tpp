#ifndef MYCLASS_TPP //needed?
#define MYCLASS_TPP //needed?

template<typename T>
MyClass<T>::MyClass()
{
    std::cout << "Constructer\n";
}

template<typename T>
void MyClass<T>::foo(void)
{
    std::cout << "hiiiii\n";
}

#endif //needed?