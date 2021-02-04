#include<iostream>

void enter_code(int passward){
    std::string secret_knowledge = "blah";
    if (passward == 1423){
        std::cout << secret_knowledge << "\n";
    }else {
        std::cout << "Sry, You entered wrong passward";
    }
}
int main(){
    std::cout << "Pls, Enter the password";
    int entered;
    std::cin >> entered;
    enter_code(entered);
}