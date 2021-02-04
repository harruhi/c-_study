#include<iostream>

class Song{
    std::string title;
    std::string artist;

public:
    void add_title(std::string new_title);
    std::string get_title();
    void add_artist(std::string sum);
    std::string get_artist();
};