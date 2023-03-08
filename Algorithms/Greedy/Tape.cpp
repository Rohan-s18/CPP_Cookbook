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
    
    return NULL;
}


//  Using greedy algorithm 2
int* algo_2(int t[], int x[], int n){
    return NULL;
}


//  Tester function to check the time taken for the recordings
int test_time(int t[], int x[], int n){
    return 0;
}


//  Main function
int main(){

    return 0;
}