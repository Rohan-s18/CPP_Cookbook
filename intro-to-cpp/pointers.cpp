// author: rohan singh
// c++ code on pointers



#include <iostream>
#include <string>



int main(){

    std::string player = "juan soto";
    std::string* player_ptr = &player;


    std::cout<<"player is: "<<player<<"\n";
    std::cout<<"address of player is: "<<&player<<"\n";
    std::cout<<"player_ptr is: "<<player_ptr<<"\n";
    std::cout<<"value referenced by player_ptr is: "<<*player_ptr<<"\n";
    std::cout<<"\n";


    *player_ptr = "aaron judge";
    std::cout<<"value referenced by player_ptr is: "<<*player_ptr<<"\n";
    std::cout<<"player_ptr is: "<<player_ptr<<"\n";
    std::cout<<"player is: "<<player<<"\n";
    std::cout<<"\n";

    std::cout<<"address of player_ptr: "<<&player_ptr<<"\n";
    std::cout<<"value referenced by the location player: "<<*&player<<"\n";


    return 0;

}


