// author: rohan singh
// c++ code to demonstrate functions



#include <iostream>
#include <string>



void helloWorld();
void printDetails(std::string name, std::string major, std::string minor="none");
std::string getStudentReport(std::string name, std::string major, float gpa, std::string minor="none");
void incr(int x, int y);
void incr(int* x, int y);
void printArray(int nums[], int n);
void scope(int a);


// global variables
int a = 100;
int b = 200;


int main(){

    helloWorld();
    std::cout<<"\n";

    printDetails("rohan singh", "computer science", "physics");
    std::cout<<"\n";

    printDetails("emile ekambaram","computer science");
    std::cout<<"\n";

    std::string report = getStudentReport("rohan singh", "computer science", 4.0, "physics");
    std::cout<<report;
    std::cout<<"\n";

    int x = 10;
    std::cout<<"before increment: "<<x<<"\n";
    std::cout<<"address location of x: "<<&x<<"\n";
    incr(x, 5);
    std::cout<<"after increment: "<<x<<"\n";
    std::cout<<"\n";

    std::cout<<"before increment: "<<x<<"\n";
    std::cout<<"address location of x: "<<&x<<"\n";
    incr(&x, 5);
    std::cout<<"after increment: "<<x<<"\n";
    std::cout<<"\n";

    int arry[] = {21,-8,9,5,16};
    printArray(arry, 5);
    std::cout<<"\n";

    scope(300);

    return 0;

}



void helloWorld(){
    std::cout<<"hello world\n";
}



void printDetails(std::string name, std::string major, std::string minor){

    std::cout<<"student name : "<<name<<"\n";
    std::cout<<"\tmajor: "<<major<<"\n";
    std::cout<<"\tminor: "<<minor<<"\n";

}



std::string getStudentReport(std::string name, std::string major,float gpa, std::string minor){
    
    std::string studentReport = "student name : " + name + "\n\tmajor: " + major + "\n\tminor: " + minor + "\n\tgpa  : " + std::to_string(gpa) + "\n";

    return studentReport;
}



void incr(int x, int y){
   x += y; 
   std::cout<<"address location of x: "<<&x<<"\n";
}



void incr(int* x, int y){
    *x += y;
    std::cout<<"address location of x: "<<x<<"\n";
}



void printArray(int nums[], int n){
    std::cout<<"[";
    for(int i = 0; i < n-1; i++)
        std::cout<<nums[i]<<", ";
    std::cout<<nums[n-1]<<"]\n";
}



void scope(int a){

    std::cout<<"the value of a is: "<<a<<"\n";
    int b = 400;
    std::cout<<"the value of b is: "<<b<<"\n";

}


