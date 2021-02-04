#include <iostream>
char to_on_off(){
    char answer;
    std::cout << "Hello IT.\n";
    std::cout << "Have you tried turning it off and on again? y/n\n";
    std::cin >>  answer;
    return answer;
}

int main(){
    char on = 'y';
    int sir = 1;
    char trrue;
    while (sir == 1){
        trrue = to_on_off();
        if(trrue == on){
            sir = 1;
        }else{
            sir = 0;
        }
}
}   