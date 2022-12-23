//
//  main.cpp
//  Crash_Course_src
//
//  Created by Rohan Singh on 12/23/22.
//

#include <stdio.h>
#include <cstdio>

constexpr int intsqrt(int n){
    int i = 1;
    while(i*i < n) ++i;
    return i - (i*i!=n);
}

int main(){
    constexpr int x = 49;
    constexpr int y = intsqrt(x);
    printf("The Squareroot of %d is: %d\n",x,y);
    return 0;
}
