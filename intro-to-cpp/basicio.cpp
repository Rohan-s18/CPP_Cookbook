// author: rohan singh
// code for basic io in c++



#include <iostream>
#include <fstream>



void ioCalculator();
void printFile(std::string fpath);
void writeFile(std::string text, std::string fpath);



int main(){

    ioCalculator();
    std::cout<<"\n";

    printFile("myfile.t");
    std::cout<<"\n";

    std::string text = "Tensor: [[-9.1, 3.6, -2.2],[17.1,-0.3,1.4],[18.1,1.1,2.2]]";
    writeFile(text, "myotherfile.t");

    printFile("myotherfile.t");

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

    if(!opr.compare("ADD")){
        std::cout<<"The result is: "<<x+y<<"\n";
    }
    else if(!opr.compare("SUBTRACT")){
        std::cout<<"The result is: "<<x-y<<"\n";
    }
    else if(!opr.compare("MULTIPLY")){
        std::cout<<"The result is: "<<x*y<<"\n";
    }
    else if(!opr.compare("DIVIDE")){
        std::cout<<"The result is: "<<x/y<<"\n";
    }
    else{
        std::cout<<"Please provide a valid operator\n";
    }



}



void printFile(std::string fpath){

    std::string temp;

    std::ifstream myStream(fpath);

    while (std::getline(myStream, temp))
        std::cout <<temp <<"\n";

}



void writeFile(std::string text, std::string fpath){

    std::ofstream myStream(fpath);

    myStream << text;

}


