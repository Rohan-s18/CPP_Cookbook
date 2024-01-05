// author: rohan singh
// introduction to arrays in c++, time to say arrghhhh

// imports
#include <iostream>
#include <array>
#include <cstdlib>

void print_arr(int arr[], int n);
int sqrt(int n);
int* get_sqrts(int arr[], int n);


// main function for testing
int main(){

    // declaring an array
    int arrgh[] = {4,15,36,71,62,93,1,0,89,27};
    int n = sizeof(arrgh)/sizeof(int);
    std::cout<<"printing the array contents\n";
    print_arr(arrgh,n);

    // getting all of the square roots of arrgh
    int* arrgh_sqrts = get_sqrts(arrgh, n);
    std::cout<<"\nprinting the square roots\n";
    print_arr(arrgh_sqrts,n);

    return 0;
}


// simple function to iterate through an array and printing its contents
void print_arr(int arr[], int n){
    for(int i = 0; i < n; i++)std::cout<<"the "<<i<<"-th element of the array is "<<arr[i]<<"\n";
}


// declaring a function to get the integer square root of a number
int sqrt(int n){
    int i = 1;
    while(i*i < n)++i;
    return i - (i*i!=n);
}


// simple function to get the integer square root of all numbers in an array
int* get_sqrts(int arr[], int n){
    // declaring an empty array
    int* my_sqrts = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)my_sqrts[i] = sqrt(arr[i]);
    return my_sqrts;
} 
