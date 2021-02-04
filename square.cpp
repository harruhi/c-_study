#include <iostream>

int main() {
  
  int i = 0;
  int square = 0;
  
  while(i < 10){
    square = i;
    std::cout << i << "   ";
    std::cout << square * square << "\n";
    i++;
  }
}