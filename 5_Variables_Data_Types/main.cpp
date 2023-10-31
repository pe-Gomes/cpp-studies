#include <iostream>

int main()
{
  /*
    Data Types in C++ can reference primitive types, derived types and user defined types.

    A number can be represented with different numbers systems, such as binary, hexadecimal, octal or decimal.

    Thus, the variable that receives the number is a representation of a specific place in the memory that holds it's value and data type.

    Keep in mind that declaring a variable without inicializing it's value makes the compiler generate a random
    garbage value when allocating memory, which can result in warnings.

    Below are the most common primitive types in C++.
  */
  int naturalNumber;
  double largeValue;
  float decimalValue;
  char character;
  bool success;
  auto deducedValue = 4; // Must be initialized with a declaration statement, as it's type is deduced from the declaration.
  void something();

  /*
    Variables can be initialized with curly braces, equal sign or parentheses (functional inicialization).

    Keep in mind that initilizing via parentheses or assign equals means the variable will be stored accordingdly with the
    type declared by the programmer.

    See the example below:
    ```cpp
      int foo(2.5);

      // or
      int bar = 2.5;
    ```
    In this case, foo and bar will be initialized with data lost, because sillently inicializes the variable
    with the value of an int 2. That kind of behavior is called **narrowing convertion**, because the data will be stored to the
    limit of it's type capacity.

    In the other hand, if foo or bar were initialized with the curly braces, there would have been a compile error,
    alerting about the incompatibility of the value and the declared type.
  */

  int decimalNumber{15};
  int octalNumber(017);
  int binaryNumber{0b00001111};
  int hexadecimalNumber = 0x0f;

  std::cout << decimalNumber << " " << octalNumber << " " << hexadecimalNumber << " " << binaryNumber << std::endl;
  std::cout << sizeof(decimalNumber) << " " << sizeof(octalNumber) << " " << sizeof(hexadecimalNumber)
            << " " << sizeof(binaryNumber) << std::endl;

  // Different data types uses different sizes of the memory buffers
  std::cout << sizeof(largeValue) << " " << sizeof(decimalValue) << " " << sizeof(character)
            << " " << sizeof(success) << std::endl;

  // It's also possible to apply one or many moddifiers to integers
  unsigned int value1{10};
  signed int value2{-10};
  short int value3{-1};
  long signed int value4{100000};

  return 0;
}