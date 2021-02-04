#include "song.hpp"

void Song::add_title(std::string new_title){
    title = new_title;
}
std::string Song::get_title(){
    return title;
}
void Song::add_artist(std::string sum){
    artist = artist + sum;
}
std::string Song::get_artist(){
    return artist;
}