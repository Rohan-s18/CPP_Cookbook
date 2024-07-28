// author: rohan singh
// code for basic io in c++



#include <iostream>
#include <fstream>



void ioCalculator();



int main(){

    ioCalculator();

    return 0;

}



void ioCalculator(){

    int x;
    int y;
    std::string opr;

    std::cout<<"Provide the first integer: ";
    std::cin>>x;
    std::cout<<"Provide the second integer: ";
    std::cin>>y;
    std::cout<<"Provide the operator (ADD, SUBTRACT, MULTIPLY, DIVIDE): ";
    std::cin>>opr;

    if(opr.compare("ADD")){
        std::cout<<"The result is: "<<x+y<<"\n";
    }
    else if(opr.compare("SUBTRACT")){
        std::cout<<"The result is: "<<x-y<<"\n";
    }
    else if(opr.compare("MULTIPLY")){
        std::cout<<"The result is: "<<x*y<<"\n";
    }
    else if(opr.compare("DIVIDE")){
        std::cout<<"The result is: "<<x/y<<"\n";
    }
    else{
        std::cout<<"Please provide a valid operator\n";
    }



}


