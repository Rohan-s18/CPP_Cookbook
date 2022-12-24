//
//  Pointers.cpp
//  Crash_Course_src
//
//  Created by Rohan Singh on 12/23/22.
//
//  The purpose of this file is to go over pointers in C++
//  If you are familiar with pointers in C, then this would be a breeze for you

//Imports
#include <stdio.h>
#include <cstdio>


//  Data Class (struct)
struct CWRU_Course{
    
    //The data inside the struct
    private:
        char *name;
        char *code;
        int credits;
        char *prof;
    
        //The function to set the credits of the course
        bool set_credits(int n){
            credits = n;
            return true;
        }
    
        //The function to set the name of the course
        bool set_name(char *c_name){
            name = c_name;
            return true;
        }
    
        //The function to set the code of the course
        bool set_code(char *c_code){
            code = c_code;
            return true;
        }
    
    public:
    
        //Constructor for the struct
        CWRU_Course(char *course_name, char *course_code, int creds){
            set_name(course_name);
            set_code(course_code);
            set_credits(creds);
        }
    
        //The functions of the struct
        void print_course(){
            printf("%s: %s (%d Credits)\n",code,name,credits);
        }
    
        bool change_prof(char *prof_name){
            prof = prof_name;
            return true;
        }
    
};

//  Method to demonstrate the creation and deference-ion? of a pointer
void change_foo(){
    
    //Simple int foo
    int foo = 10;
    
    //Pointer to foo
    int* foo_pointer = &foo;
    
    printf("The value of foo is: %d\n",foo);
    printf("The address of foo is :%p\n",foo_pointer);
    printf("The address of foo_pointer is :%p\n",&foo_pointer);
    
    //Dereferencing the foo_pointer and changing its value to 20
    *foo_pointer = 20;
    printf("The value of foo is: %d\n",foo);
    
}

void struct_pointer(){
    
    //Instantiating the struct
    CWRU_Course java {"Introduction to Java","CSDS 132",3};
    
    java.print_course();
    
}


//  Demo method is an extension of the main method, this is going to be the first method that will be pushed onto the call stack
void pointers_demo(){
    
    //printf("Hello World!\n");
    
    //Calling the change_foo method which demonstrates how pointers work
    change_foo();
    
    printf("\n");
    
    //Calling the struct_pointer method which demonstrates how pointers to structs work
    struct_pointer();
    
    printf("\n");
}


//Main method of the file
int main(){
    
    pointers_demo();
    
    return 0;
}
