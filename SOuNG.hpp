#include <string>

class Song{
    std::string title;
    std::string artist;

public:
    std::string get_title();

    std::string get_artist();
    
    Song(std::string new_title, std::string new_artist);
};