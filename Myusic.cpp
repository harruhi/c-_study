#include <iostream>
#include "SOuNG.hpp"

int main(){
    Song back_to_black("Back_to_Black", "Amy Winehouse");
    std::cout << back_to_black.get_title() << "\n";
    std::cout << back_to_black.get_artist() << "\n";

}