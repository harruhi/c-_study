#include <iostream>

int main() {
  int num;
  std::cout << "What number of planet do you want to know about relative gravity";
  std::cin >> num;
  switch(num){

    case 1 :
      std::cout << "1.Mercury, Gravity : 0.38";
      break;
    case 2 :
      std::cout << "2.Venus, Gravity : 0.91";
      break;
    case 3 :
      std::cout << "3.Mars, Gravity : 0.38";
      break;
    case 4 :
      std::cout << "4.Jupiter, Gravity : 2.34";
      break;    
    case 5 :
      std::cout << "5.Saturn, Gravity : 1.06";
      break;
    case 6 :
      std::cout << "6.Uranus, Gravity : 0.92";
      break;
    case 7 :
      std::cout << "7.Neptune, Gravity : 1.19";
      break;
  
  } 
  if (num > 7){
    std::cout << "unknown file\n";
  }
  return 0;
  
  
  
  
  
  
  
  
  
  
}