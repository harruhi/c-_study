#include <iostream>

int main(){
    int years;
    std::cout << "Input the year : "; 
    std::cin >> years;

    if(years < 1000){
        std::cout << "Cheak inputs";
    }
    else if(years % 4 == 0  || years % 400 == 0){
        std::cout << "leap year";
    }else if(years % 4 != 0 || years % 400 != 0 && years % 100 == 0){
        std::cout << "not leap year";
    }
    return 0;

}