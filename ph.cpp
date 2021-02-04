#include <iostream>

int main(){
    double ph = 4.6;

    if(ph > 7){
        std::cout << "Basic";
    }
    else if(ph < 7){
        std::cout << "Acidic";
    }
    else{
        std::cout << "Neutral";
    }
    return 0;
}