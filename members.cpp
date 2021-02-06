#include "members.hpp"



void Visiter::add_member(std::string HUM){
    Members = Members + HUM;
}
void Visiter::add_days(int aum){
    day = aum + day;
}