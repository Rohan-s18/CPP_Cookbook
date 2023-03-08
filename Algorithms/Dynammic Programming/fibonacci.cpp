//  Author: Rohan Singh
//  3/28/2023
//  Code for Fibonacci sequence calculation in C++


//  Function to calculate the results of the fibonacci sequence

#include <iostream>


//  Dynammic Programming for calculating the fibonacci sequences
int* fib(int n){

    //Creating the table
    int* table = (int*)malloc(sizeof(int)*n);

    //Setting up the base cases
    table[0] = 1;
    table[1] = 1;

    //Creating the table (forward-fill)
    for(int i = 2; i < n; i++){
        table[i] = table[i-1] + table[i-2];
    }

    //Returning the solution table
    return table;
}


//  Function to print out an array
void print_array(int arr[], int n){
    std::cout<<"[";
    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"]\n";
}

//  Main function
int main(){

    //Getting the results of the first 50 fibonacci numbers
    int* result = fib(50);

    print_array(result,50);

    return 0;
}
