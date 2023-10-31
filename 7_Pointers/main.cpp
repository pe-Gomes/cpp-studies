#include <iostream>

int main()
{
  /*
    A pointer is a variable that stores the memory address of an object. Because of that, it always have the same size, no matter
    the type of the data that is beeing pointed to.

    When initialized, it only can store the type declrared by the programmer. If initialized with empty content, the compuler will
    understand as it is not pointing to anything, therefore, it's a nullptr.
  */

  float *p_number{};
  float *p_number2{nullptr};

  // You can access the adress of the pointed data through the '&' symbol.
  int int_var1{65};
  int *p_var1{&int_var1};

  std::cout << "The adress of the int_var1 is: " << p_var1 << std::endl;
  std::cout << "This is a variable with a null poiter: " << p_number << std::endl;

  float float_var2{5.25456};
  float *p_float{&float_var2};

  std::cout << "This is a different adress from float_var2: " << p_float << std::endl;

  // In order to access the value that is beeing pointed to is necessary to dereference the pointer.
  std::cout << "The value of int_var1 is: " << *p_var1 << std::endl;
  std::cout << "This is the value from float_var2: " << *p_float << std::endl;

  return 0;
}