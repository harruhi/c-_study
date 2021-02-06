#include<iostream>
#include "members.hpp"
#include<vector>

int main(){
    int visit_acess;
    std::string recycle;
    int num1 = 0;
    int days;
    int helper;
    std::string answer;
    std::string welcomers;
    std::vector<int> rooms(10);
    std::string vi_room;
    rooms.push_back(101);
    rooms.push_back(102);
    rooms.push_back(201);
    rooms.push_back(202);
    rooms.push_back(301);
    rooms.push_back(302);
    rooms.push_back(401);
    rooms.push_back(402);
    rooms.push_back(501);
    rooms.push_back(502);
    //벡터 사용하여 방의 개수 정의
    Visiter Visits{};
    while(num1 == 0){
        std::cout << "Welcome Visiter! Why you came here?\n";
        std::cout << "1.To reservation hotel\n2.To look around\n3.Where is toilet?\n";
        std::cin >> welcomers;

        if(welcomers == "1"){
            visit_acess = 1;
            std::cout << "Wait a seconds, I'm going to find out which room is left\n";
        }else if(welcomers == "2"){
            std::cout << "Okay, have a nice day :P\n";
            visit_acess = 2;
        }else if(welcomers == "3"){
            std::cout << "Go one block and turn left than there will be a toilet there\n";
            visit_acess = 3;
        }else{
            std::cout << "Do you want to ask more?\n"; //이거 else인데도 한번 출력됨;
            std::cin >> recycle;
            if(recycle == "Yes"){
                num1 = 0;
            }else{
                num1 = 1;
            }
           }
    if(visit_acess == 1){
        std::cout << "What kind of room do you want?\n";
        std::cout << "We have " << rooms.size() << "rooms\n";
        std::cout << "Can you answer at here?\n";
        std::cout << "1.What's your name\n";
        std::cin >> vi_room;
        Visits.add_member(vi_room);
        std::cout << "2.How much time do you will stay at here?\n";
        std::cin >> days;
        Visits.add_days(days);
        std::cout << "Okay the reservation completed.\n";
        std::cout << "Your name is " << vi_room << " and you will stay for " << days <<" times\n";
        num1 = 1;
    }else if(visit_acess == 3){
        helper = 1;

    }
    if(helper == 1){
        std::cout << "If you cannot find the toilet, We can help you\n";
    }
    num1 = 1;
}
return 0;
}
