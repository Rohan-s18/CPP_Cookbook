//  Author: Rohan Singh
//  Greedy Algorithm to solve he Tape recorder problem
//  3/8/2023


//  Imports
#include <iostream>

using namespace std;



//  Helper functions for quicksort

//Helper method to swap the values at 2 indices of an array
void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

//Recurssive QuickSort helper method
void quick_sort_recur(int arr[], int start, int end){

    //Base Case (size 1)
    if(start>=end)
        return;

    //Choosing the pivot
    int pivot = (start+end)/2;

    //Partitioning the array (left <, right >)
    pivot = partition(arr,start,pivot,end);

    //Recurrsive calls to subarrays
    quick_sort_recur(arr,start,pivot);
    quick_sort_recur(arr,pivot+1,end);
}

//Partition
int partition(int arr[], int start, int pivot, int end){
    int i = start-1;
    int j = end+1;
    int elm = arr[pivot];

    while(true){

        //Moving right till we find an out-of-place element
        do{
            i++;
        }
        while(arr[i] < elm);

        //Moving left till we find an out-of-place element
        do{
            j--;
        }
        while(arr[j] > elm);

        //If both indices pass each other
        if(i >= j)
            return j;

        //Swapping the out-of-place elements
        swap(arr,i,j);
    }
}


//Function for quick sort
void quick_sort(int arr[], int n){
    //Calling the quicksort helper function
    quick_sort_recur(arr,0,n-1);
}


//  Using greedy algorithm 1
int* algo_1(int t[], int x[], int n){
    int* table = (int*)malloc(sizeof(int)*n);
    table = t;
    quick_sort(table,n);
    return table;
}


//  Using greedy algorithm 2
int* algo_2(int t[], int x[], int n){
    int* table = (int*)malloc(sizeof(int)*n);
    for(int i = 0; i < n; i++)
        table[i] = t[i]*x[i];
    quick_sort(table,n);
    return table;
}


//  Tester function to check the time taken for the recordings
int test_time(int t[], int x[], int n){
    int total_time = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(t[i] == 2)
    }
    return total_time;
}


//  Main function
int main(){
    int t[] = {3,2,7};
    int x[] = {3,4,8};
    
    int* solution_1 = (int*)malloc(3*sizeof(int));
    int* solution_2 = (int*)malloc(3*sizeof(int));

    solution_1 = algo_1(t,x,3);

    solution_2 = algo_2(t,x,3);

    std::cout<<"The time for greedy algorithm 1 is: "<<test_time(solution_1,x,3)<<"\n";
    std::cout<<"The time for greedy algorithm 2 is: "<<test_time(solution_2,x,3)<<"\n";

    return 0;
}