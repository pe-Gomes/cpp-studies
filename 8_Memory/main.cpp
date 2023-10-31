#include <iostream>

/*
   The Program Memory Map serves as an interpration for the memory needed to run the program in RAM
   that's currently allocated at the hard drive.

   In that process, there ara a number of levels of abstraction. In simple terms, the variables and funcition calls are
   used by the program are normally stored at the STACK level, however it's possible to use the HEAP in some cases.

   That is called dynamic memory.

   The main characteristics between STACK and HEAP are:

   || -------- STACK ---------|| --------- HEAP --------||
   || Memory is finite         || Memory is finite        ||
   ||-------------------------||------------------------||
   || The developer is NOT in || The developes IS in    ||
   || control of the memory   || control of the memory  ||
   || lifetime.               || lifetime.              ||
   || ------------------------||------------------------||
   || Lifetime is controlled  || Lifetime is controlled ||
   || by the SCOPE mechanism. || explicitly through new ||
   ||                         || and delete operators.  ||
   ||-------------------------||------------------------||
*/

int main()
{
  int *p_number{new int{77}}; // The memory alocatted will be available (HEAP) in the for the program for as long as you drop it.

  *p_number = 77;
  std::cout << "Dynamically allocationg memory: " << *p_number << std::endl;

  // Removing the memory from the heap.
  delete p_number;
  p_number = nullptr;

  // No longer available for calling. This will produce an error.
  // std::cout << "Dynamically removing memory: " << *p_number << std::endl;
}