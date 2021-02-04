#include <iostream>

#include "coffee.hpp"

int main() {
  

  std::cout << make_coffee();
  

  std::cout << make_coffee(true);
  

  std::cout << make_coffee(true, true);
  

  std::cout << make_coffee(false, true);
  
}