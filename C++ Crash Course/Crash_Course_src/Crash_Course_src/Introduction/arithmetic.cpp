//
//  arithmetic.cpp
//  Crash_Course_src
//
//  Created by Rohan Singh on 12/23/22.
//
//  This file is an introduction to simple arithmetic operations, functions and operators
//  In the introductory files, I will be using printf() instead of cout

#include <stdio.h>
#include <cstdio>

//  Function to find the integer squareroot of a number
int int_sqrt(int n){
    int i = 1;
    while(i*i < n) ++i;
    return i - (i*i!=n);
}

//  Function to get the absolute value of a number
int abs_value(int n){
    if(n > 0)
        return n;
    return n*-1;
}


//  Function that will format and print the different types of int literals
void print_literal_ints(){
    
    //Binary literal
    int a = 0b1010101010;
    
    //Octal literal
    int b = 012345;
    
    //Hexadecimal literal
    int c = 0xFFFF;
    
    //Hexadecimal literal for unsigned long long
    unsigned long long d = 0xFFFFFFFFFFFFFFFF;
    
    //Printing the binary literal
    printf("%d\n",a);
    
    //Printing the octal literal
    printf("%d\n",b);
    
    //Printing the hexadecimal int literal
    printf("%d\n",c);
    
    //Printing the unsigned long long hexadecimal literal
    printf("%llu\n",d);
    
}



// Main method of the file
int main(){
    
    //Deckaring the variable
    int x = 49;
    
    //Calling the squareroot function
    int y = int_sqrt(x);
    
    //Printing the value
    printf("The Squareroot of %d is: %d\n",x,y);
    
    //Printing the value
    printf("The Absolute Value of %d is %d\n",-67,abs_value(-67));
    
    //Printing the int literals
    print_literal_ints();
    
    return 0;
}

