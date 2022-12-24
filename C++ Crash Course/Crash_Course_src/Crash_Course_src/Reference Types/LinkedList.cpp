//
//  LinkedList.cpp
//  Crash_Course_src
//
//  Created by Rohan Singh on 12/24/22.
//
//  This code will illustrate to you how to make LinkedLists using Structs in C++

//  Imports
#include <stdio.h>
#include <cstdio>


//  This Struct is a singly LinkedList :)
struct Node{
    
    //The pointer to the next Node
    Node* next;
    
    //The value stored in the Node
    char* name;
    
    //This method will insert the new node after this one
    void insert(Node* new_node){
        //Setting the next of the new Node to 'this' node's next
        new_node->next = next;
        
        //The next of 'this' node is now the new_node
        next = new_node;
    }
    
};


//  This method is an extension of the main method
void demo(){
    
}



//  Main method (Uncomment to run)
int main(){
    
    //Runnning the demo method
    demo();
    
    return 0;
    
}


