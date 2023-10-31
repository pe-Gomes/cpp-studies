#include <iostream>

int main()
{
  // Declaring an empty array and it's type. An array only stores elements of the same type.
  // C++ allow you to "access" positions in memory that are NOT owned by the array, which can cause panicking or access to garbage data.
  int scores[10];

  // Initializing the array
  for (size_t i{1}; i <= 10; i++)
  {
    scores[i - 1] = i;
  }

  // Reading the array and rettrieving the size with std::size.
  for (int i = 0; i < std::size(scores); i++)
  {
    std::cout << scores[i] << std::endl;
  }

  // Declaring and inicializing the array. An array declared and inicialized as a constant cannot be modified later on.
  float grades[3]{7.5, 9.0, 8.23};
  float sum_grades = 0;

  // Another way of reading the elements of the array with for loop.
  for (float element : grades)
  {
    sum_grades += element;
  }
  std::cout << "Your final grade is equal:" << sum_grades / 3 << std::endl;
}