# C++ is "C with Classes"

The goal of these modules is to introduce you to Object-Oriented Programming.
This will be the starting point of your C++ journey.
Many languages are recommended to learn OOP.

## Cpp 00 - 01 :

### Namespace :
  A namespace is a feature that allows you to organize and encapsulate code into logical groups
Namespace provide the space where we can define or declare identifier i.e. variable,method, classes.

- stdio streams : Standard Input / Output Streams Library (iostream)
- cin : Standard input stream (object)
- cout : Standard output stream (object)
- cerr : Standard output stream for errors (object)
- clog : Standard output stream for logging (object)
- WRITE : the stream insertion operator (<<)
- READ : the stream extraction operator (>>)

### Scope resolution operator “::” 
  Here std is used in front of cin and cout along with scope resolution operator, which indicates that the object cin and cout are defined inside the namespace whose name is std. The std is the standard library, and both cin and cout are defined inside this scope.

### Cout : 
  The cout object in C++ is an object of class iostream. It is defined in the iostream header file. It is used to display the output to the standard output device i.e. monitor. It is associated with the standard C output stream stdout. The data needed to be displayed on the screen is inserted in the standard output stream (cout) using the insertion operator(<<).

### Header:
- hpp : C++ Headers.
  - h : C/C++ compatible or pure C Headers.

### Classes :
  Classes are an expanded concept of data structures: like data structures, they can contain data members, but they can also contain functions as members.
- public: members can be accessed outside the class.
- private: members cannot be accessed outside the class.
- protected: members cannot be accessed(viewed) from outside the class, but can be accessed in inherited classes(subclasses).

### This Pointe : (this->)
Every object has a special pointer this which points to the object itself.


## Cpp 02 :

### Canonical Form :  https://www.shiksha.com/online-courses/articles/constructors-in-cpp/

- Default Constructor : 
	class can include a special function called constructor, which is automatically called whenever a new object of this class is created. This constructor function must have the same name as the class, and cannot have any return type; not even void.

- Copy constructor :
  	A copy constructor is a member function that initializes an object using another object of the same class. In simple terms, a constructor which creates an object by initializing it with an object of the same class, which has been created previously, is known as a copy constructor.
  
- Assignment Operator.
- 
- Destructor :
	The destructor fulfills the opposite functionality. It is automatically called when an object is destroyed, either because its scope of existence has finished (for example, if it was defined as a local object within a function and the function ends) or because it is an object dynamically assigned and it is released using the operator delete.

### Copy Constructor vs Assignment Operator in C++ :
A copy constructor is used to initialize a previously uninitialized object from some other object's data.
An assignment operator is used to replace the data of a previously initialized object with some other object's data.

### Dummy parameter :
The int parameter is a dummy parameter used to differentiate between prefix and postfix versions of the operators (++a | - -a | a++ | a- - ).


### Static : 
1. Local Static: static var inside of a function: value sticks around throughout program lifetime so the same value sticks around if you reRun the function (only gets initialized once.
2. Static globally scoped var / func: Makes it visible only in this file, normally globals would be visible everywhere in program when linked.
3. Static Class Vars or Functions: belongs to root class, not instances of it, same values shared across all instances (so cant access instance variables/'this' from static methods).

### Ad-hoc Polymorphism :	
Ad-hoc Polymorphism, also called as Overloading Ad-hoc Polymorphism allows functions having the same name to act differently for different types.

### Const member function:
- When a function is declared as const, it can be called on any type of object, const object as well as non-const objects.
- Whenever an object is declared as const, it needs to be initialized at the time of declaration. However, the object initialization while declaration is possible only with the help of constructors.
- A function becomes const when the const keyword is used in the function’s declaration. The idea of const functions is not to allow them to modify the object on which they are called.
- It is recommended practice to make as many functions const as possible so that accidental changes to objects are avoided.

### Fixed-point: 
is a method of representing fractional numbers by storing a fixed number of digits of their fractional part.

## Cpp 03 :

### Types of inheritance :
- Single Inheritance.
- Multiple Inheritance.
- Multilevel Inheritance.
- Hierarchical Inheritance.
- Hybrid Inheritance.


![]([https://iharsh234.github.io/WebApp/images/demo/web_app_face.JPG](https://sp-ao.shortpixel.ai/client/to_auto,q_glossy,ret_img,w_800,h_445/https://simplesnippets.tech/wp-content/uploads/2018/03/types_of_inheritance_in_cpp-800x445.png))

### Query Filled Form
![](https://iharsh234.github.io/WebApp/images/demo/demo_query.JPG)

### Charts
![](https://iharsh234.github.io/WebApp/images/demo/demo_chart1.JPG)
![](https://iharsh234.github.io/WebApp/images/demo/demo_chart2.JPG)
![](https://iharsh234.github.io/WebApp/images/demo/demo_chart3.JPG)


## Mobile support
The WebApp is compatible with devices of all sizes and all OS's, and consistent improvements are being made.

![](https://iharsh234.github.io/WebApp/images/demo/mobile.png)




## [Usage](https://iharsh234.github.io/WebApp/) 

### Development
Want to contribute? Great!

To fix a bug or enhance an existing module, follow these steps:

- Fork the repo
- Create a new branch (`git checkout -b improve-feature`)
- Make the appropriate changes in the files
- Add changes to reflect the changes made
- Commit your changes (`git commit -am 'Improve feature'`)
- Push to the branch (`git push origin improve-feature`)
- Create a Pull Request 

### Bug / Feature Request

If you find a bug (the website couldn't handle the query and / or gave undesired results), kindly open an issue [here](https://github.com/iharsh234/WebApp/issues/new) by including your search query and the expected result.

If you'd like to request a new function, feel free to do so by opening an issue [here](https://github.com/iharsh234/WebApp/issues/new). Please include sample queries and their corresponding results.


## Built with 

- [jQuery - Ajax](http://www.w3schools.com/jquery/jquery_ref_ajax.asp) - jQuery simplifies HTML document traversing, event handling, animating, and Ajax interactions for rapid web development.
- [Google Chart API](https://developers.google.com/chart/interactive/docs/quick_start) - Free , Rich Gallery , Customizable and Cross-browser compatible.
- [Bootstrap](http://getbootstrap.com/) - Extensive list of components and  Bundled Javascript plugins.


## To-do
- Add BSE (India) Symbol to the current App.
- Decide comparison models of Stocks. (suggestions are most welcome).
- Another WebApp, capable of comparing at least 10 stocks.

## Team

[![Harsh Vijay](https://avatars1.githubusercontent.com/u/12688534?v=3&s=144)](https://github.com/iharsh234)  | [![Quandl.com](https://github.com/iharsh234/WebApp/blob/master/images/quandl.jpg)](https://www.quandl.com/)
---|---
[Harsh Vijay ](https://github.com/iharsh234) |[Quandl](https://www.quandl.com)

## [License](https://github.com/iharsh234/WebApp/blob/master/LICENSE.md)

MIT © [Harsh Vijay ](https://github.com/iharsh234)

