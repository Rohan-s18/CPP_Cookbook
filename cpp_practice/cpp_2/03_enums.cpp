// author: rohan singh
// getting used to enums by making a simple calculator

// imports
#include <iostream>
#include <array>


// declaring an enum class
enum class Arithmetic_Operator{
    ADD,
    MULTIPLY,
    SUBTRACT,
    DIVIDE,
    ABS,
    MODULO,
    SQRT
};


// function definitions
int sqrt(int n);
int abs(int n);
int calculator(int a, int b, Arithmetic_Operator opr);


// main function
int main(){

    

    return 0;
}


// integer square root function
int sqrt(int n){
    int i = 1;
    while(i*i < n)i++;
    return i - (i*i!=n);
}


// absolute value fucntion
int abs(int n){
    return n * (1 + (-2*(n < 0)));
}


// calculator function
int calculator(int a, int b, Arithmetic_Operator opr){
    // switch statement example
    switch (opr){
        case Arithmetic_Operator::ADD: return a+b; break;
        case Arithmetic_Operator::SUBTRACT: return a-b; break;
        case Arithmetic_Operator::MULTIPLY: return a*b; break;
        case Arithmetic_Operator::DIVIDE: return a/b; break;
        case Arithmetic_Operator::MODULO: return a%b; break;
        case Arithmetic_Operator::ABS: return abs(a); break;
        case Arithmetic_Operator::SQRT: return sqrt(a); break;
        default: return -1;
    }
}