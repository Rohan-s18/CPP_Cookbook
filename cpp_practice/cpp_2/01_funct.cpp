// author: rohan singh
// introduction to functions in c++

// imports
#include <iostream>

// declaring a function to get the integer square root of a number
int sqrt(int n){
    int i = 1;
    while(i*i < n)i++;
    return i - (i*i!=n);
}


// main function for testing
int main(){
    int y = 19;
    int x = sqrt(y);
    
    std::cout<<"the integer square root of "<<y<<" is "<<x<<"\n";

    return 0;
}