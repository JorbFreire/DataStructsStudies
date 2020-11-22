#include <iostream>

int main() {
  int integer = 99;
  int array[3]; 
  int * pointer;
  
  // Assign address from "integer" to "pointer"
  // "pointer" points to "integer" 
  pointer = &integer;
  
  // integer outputs
  std::cout << "pointer value:       " << *pointer << std::endl;
  std::cout << "integer value:       " << integer << std::endl;
  std::cout << "pointer address:     " << &pointer << std::endl;
  std::cout << "integer address:     " << &integer << std::endl;
  std::cout << "pointer pointing to: " << pointer << std::endl;
  // ***
  
  std::cout << "\n\n\n";

  // Assign some values to array
  for(int i = 0; i < sizeof(array)/4; i++)
    array[i] = (i+1) * 3;

  // Array outputs
  std::cout << "array address:     " << &array << std::endl << std::endl;
  
  for(int i = 0; i < sizeof(array)/4; i++) {
    pointer = &array[i];

    std::cout << i << " pointer value: " << array[i] << std::endl;
    std::cout << "array[" << i << "] value:  " << *pointer << std::endl;
    std::cout << i << " pointer address: " << &pointer << std::endl;
    std::cout << "array[" << i << "] address:  " << &array[i] << std::endl;
    std::cout << "pointer pointing to: " << pointer << std::endl;

    std::cout << std::endl;
  }
  // ***

  std::cout << "\nfinish execution\n\n";
  return 0;
}
