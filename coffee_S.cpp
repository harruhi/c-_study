#include<string>
std::string make_coffee(bool milk, bool sugar){
    std::string coffee = "Here's yout coffee";
    if (milk && sugar){
        coffee += " with milk and sugar";
    }else if(milk){
        coffee += " with milk";
    }else if(sugar){
        coffee += " with sugar";
    }
    return coffee + "\n";
}