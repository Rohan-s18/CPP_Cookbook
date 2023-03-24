//  Author: Rohan Singh
//  3/9/2023
// Scheduling Problem solved using dynamic programming


//  Imports
#include <iostream>

//  Problem:
//  Make an optimal schedule for jobs high stress (takes 2 weeks) or low stress (takes 1 week)


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

//  Method for planning the schedule
int plan(int low_stress[], int high_stress[], char schedule[], int n){
    //Variable to check the total payoff
    int payoff = 0;

    //Table to hold the payoffs
    int solution[n];

    //Variable for storing the current week
    int index = 0;


    //Choosing the base case optimal job
    if(low_stress[index] < high_stress[index]){
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
            if(schedule[index-1] == 'l'){

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

                schedule[index-2] = 'l';
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

    print_array(solution,n);

    return payoff;
}




//  Main Function
int main(){
    int h[] = {10,6,19,12,20,32,45,11,24,21};
    int l[] = {2,5,34,2,6,7,9,10,34,12};

    print_array(h,10);
    print_array(l,10);

    char sched[10];

    int payoff = plan(l,h,sched,10);

    std::cout<<"\n\nPlanning!!!\nThe payoff is:"<<payoff<<"\n";

    print_array_c(sched,10);



    return 0;
}
