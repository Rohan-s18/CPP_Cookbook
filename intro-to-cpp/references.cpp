// author: rohan singh
// code for references in c++



#include <iostream>
#include <string>



int main(){


    // in this demonstration name and person refer to the same location (point to the same value), whereas friendName has the same value but different location
    std::string name = "rohan";
    std::string &person = name;
    std::string friendName = name;
    

    std::cout<<"name is: "<<name<<"\n";
    std::cout<<"person is: "<<person<<"\n";
    std::cout<<"friendName is: "<<friendName<<"\n";

    std::cout<<"location of name is: "<<&name<<"\n";
    std::cout<<"location of person is: "<<&person<<"\n";
    std::cout<<"location of friendName is: "<<&friendName<<"\n";
    std::cout<<"\n";

    

    std::cout<<"location of name is:"<<&name<<"\n";
    std::cout<<"name is: "<<name<<"\n";
    name = "mclovin";

    std::cout<<"location of name is:"<<&name<<"\n";
    std::cout<<"name is: "<<name<<"\n";
    std::cout<<"friendName is: "<<friendName<<"\n";
    std::cout<<"location of friendName is: "<<&friendName<<"\n";
    std::cout<<"person is: "<<person<<"\n";
    std::cout<<"location of person is: "<<&person<<"\n";



    return 0;

}


