//  Author: Rohan Singh
//  3/9/2023
// Scheduling Problem solved using dynamic programming


//  Imports
#include <iostream>

//  Problem:
//  Make an optimal schedule for jobs high stress (takes 2 weeks) or low stress (takes 1 week)


//  Method for planning the schedule
int plan(int low_stress[], int high_stress[], char schedule[], int n){
    //Variable to check the total payoff
    int payoff = 0;

    //Table to hold the payoffs
    int solution[n];

    //Variable for storing the current week
    int index = 0;


    //Choosing the base case optimal job
    if(low_stress[index] < high_stres[index]){
        schedule[index] = 'h';
        payoff+=high_stress[index];
        solution[index]+=high_stress[index];
    }
    else{
        schedule[index] = 'c';
        payoff+=low_stress[index];
        solution[index]+=low_stress[index];
    }

    index++;

    //Iterating through all of the jobs
    while(index < n){

        //Choosing whether to take high stress or low stress job

        //When high stress is optimal
        if(high_stress[index] > low_stress[index] + solution[index-1]){
            //If the last week's job was low-stress
            if(schedule[index-1] == 'c'){

                payoff-=low_stress[index-1];
                payoff+=high_stress[index];

                schedule[index-1] = 'x';
                schedule[index] = 'h';

                solution[index-1] = 0;
                solution[index] = high_stress[index];

            }
            else{

                payoff+=low_stress[index-2];
                payoff-=high_stress[index-1];
                payoff+=high_stress[index];

                schedule[index-2] = 'c';
                schedule[index-1] = 'x';
                schedule[index] = 'h';

                solution[index-2] = low_stress[index-2];
                solution[index-1] = 0;
                solution[index] = high_stress[index];

            }
        }

        else{
            schedule[index] = 'c';
            payoff+=low_stress[index];
            solution[index]+=low_stress[index];
        }

        index++;
    }

    return payoff;
}


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


//  Main Function
int main(){

    return 0;
}
