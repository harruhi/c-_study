#include <iostream>
#include <string>
#include "members.hpp"

void Visiter::add_member(std::string HUM){
    Members = Members + HUM;
}