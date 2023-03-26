//  Author: Rohan Singh
//  3/26/2023
//  Solving the IBM PunchCard Problem using Dynamic Programming


//  Imports
#include <iostream>

//  Problem:
//  Make an optimal schedule for IBM Punchcard jobs
//  Each of the jobs j_i has the following attributes:
//      -> v_i: represents the value of the job
//      -> s_i: represents the start time of the job
//      -> f_i: represents the finish time of the job


//  Helper Function to print out an array of chars
void print_array_c(char arr[], int n){
    std::cout<<"[";
    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"]\n";
}


//  Helper Function to print out an array of ints
void print_array(int arr[], int n){
    std::cout<<"[";
    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"]\n";
}


//  Function to solve the problem using dynamic programming
int punchcard(int v[], int s[], int f[], bool sol[], int size, int n){

    int max_val = 0;

    return max_val;

}



//   Main function to test out the algorithm
int main(){

    int values[] = {};
    int start[] = {};
    int finish[] = {};

    bool solution[10];

    int payoff = punchcard(values,start,finish,solution, 10, 30);

    return 0;
}
