#include<iostream>
#include "members.hpp"
#include<vector>

int main(){
    int visit_acess;
    std::string recycle;
    int num1;
    int days;
    std::string answer;
    std::string welcomers;
    std::vector<int> rooms(10);
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

    while(num1 == 0){
        std::cout << "Welcome Visiter! Why you came here?\n";
        std::cin >> welcomers;
        if(welcomers == "To reservation hotel"){
            visit_acess = 1;
            std::cout << "Wait a seconds, I'm going to find out which room is left\n";
        }else if(welcomers == "To look around"){
            std::cout << "Okay, have a nice day :P\n";
            visit_acess = 2;
        }else if(welcomers == "Where is toilet?"){
            std::cout << "Go one block and turn left than there will be a toilet there\n";
            visit_acess = 3;
        }else{
            std::cout << "Do you want to ask more?\n";
            std::cin >> recycle;
            if(recycle == "Yes"){
                num1 = 0;
            }else{
                num1 = 1;
            }
           }
    }
    if(visit_acess == 1){
        std::cout << "What kind of room do you want?\n";
        std::cout << "We have " << rooms.size() << "rooms"; //벡터에서 이미 빠진 방은 나오지 않아야함
        std::cout << "Can you answer at here?\n";
        std::cout << "1.What's your name\n";
        //std::cin들가야함
        std::cout << "2.How much time do you will stay at here?\n";
        //여기도 입력 받은후 손님에 이름 더하기
    }
}
