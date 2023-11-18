// Bitwise
// The RIGHT (>>) and LEFT (>>) operatiors are equivalent to shifting the position of bites
// in order to change the value of the operand.
#include <iostream>
#include <bitset>
int main()
{
  unsigned int a = 5;
  // Print declared number
  std::cout << a << std::endl;
  // Print allocated memory adress. Where it will be stored "0000 0101..." representing 5.
  std::cout << &a << std::endl;

  // Bitshif right makes the bits order to jump to the right in the ammount requested.
  // So instead of representing itself as 0101, when jumping to one the bits become
  // 0000 0010, witch represents "2" in decimal. Whe can say the bitshift right on
  // unsigned integers produce the equivalent to a DIVISION of 2^N of an integer.
  a = a >> 1;
  std::cout << a << std::endl;
  std::cout << std::bitset<9>(a) << std::endl; // Bitset representation after the shift

  a = 5;
  // Bitshif left makes the bits order to jump to the left in the ammount requested.
  // So instead of representing itself as 0101, when jumping to one the bits become
  // 0000 1010, witch represents "10" in decimal. Whe can say the bitshift left on
  // unsigned integers produce the equivalent to a MULTIPLICATION of 2^N of an integer.
  a = a << 1;
  std::cout << a << std::endl;

  // Bitwise AND (&), OR (|), XOR (^) and NOT (~) operators compare position of the
  // bits in order to determine the value of the operand accordingly to each logic.

  a = 25;              // 0001 1001
  unsigned int b = 15; // 0000 1111
  // The result should be 0000 1001. This is also called bit masking, preserving the bits of
  // data with the second value filled with ones.
  std::cout << std::bitset<9>(a & b) << std::endl;
  std::cout << std::bitset<9>(a | b) << std::endl;
  std::cout << std::bitset<9>(a ^ b) << std::endl;
  std::cout << std::bitset<12>(~a) << std::endl;
  return 0;
}
