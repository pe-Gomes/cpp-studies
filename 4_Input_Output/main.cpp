#include <iostream>
#include <string>

void getNameAndAge()
{
  int age;
  std::string name;

  std::cout << "Please type in your first name and age, separated by spaces: " << std::endl;
  // Getting the variables through standard library "console in" and assinging them with ">>"
  std::cin >> name >> age;
  std::cout << "Hello " << name << "! You are " << age << " years old." << std::endl;
}

void getFullNameAndAge()
{
  int age;
  std::string full_name;

  std::cout << "What's your full name?" << std::endl;
  // Using getline to correctly assign the full name, because it's separeted by spaces
  std::getline(std::cin, full_name);
  std::cout << "How old are you?" << std::endl;
  std::cin >> age;

  std::cout << "Hello " << full_name << "! You are " << age << " years old." << std::endl;
}

void printLogAndErrors()
{
  std::cout << "Hello!" << std::endl;
  int age{27};
  std::cout << "Age: " << age << std::endl;

  std::cerr << "Error message: Something went wrong" << std::endl;
  std::clog << "Log message: Something happend" << std::endl;
}

int main()
{
  getFullNameAndAge();
  getNameAndAge();
  // printLogAndErrors();

  return 0;
}