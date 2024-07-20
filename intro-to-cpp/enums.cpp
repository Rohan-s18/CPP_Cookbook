// author: rohan singh
// c++ code to demonstrate enums



#include <iostream>
#include <string>



enum Difficulty{
	LOW,
	MEDIUM,
	HIGH,
};



enum Grade{
	A = 90,
	B = 80,
	C = 70,
	D = 60,
	F = 0
};



int main(){
	
	enum Difficulty myDifficulty = MEDIUM;
	
	std::cout<<"myDifficulty: "<<myDifficulty<<"\n";

	if(myDifficulty == MEDIUM)
		std::cout<<"hello world\n";
	

	enum Grade myGrade = B;
	
	switch(myGrade){
		case A:
			std::cout<<"\nTo get an A you must have "<<myGrade<<" points in the class\n";
			break;
		case B:
			std::cout<<"\nTo get a B you must have "<<myGrade<<" points in the class\n";
			break;
		case C:
			std::cout<<"\nTo get a C you must have "<<myGrade<<" points in the class\n";
			break;
		case D:
			std::cout<<"\nTo get a D you must have "<<myGrade<<" points in the class\n";
			break;
		default:
			std::cout<<"\nEveryone with <60 points gets an F by default in the class\n";
	}



	return 0;

}



