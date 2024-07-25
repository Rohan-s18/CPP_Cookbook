// author: rohan singh
// structs in c++ code



#include <iostream>
#include <string>


struct course{
	
	std::string courseName;
	std::string courseCode;
	
	int maxOccupancy;
	int currOccupancy;

	std::string instructor;
	std::string department;

};



int main(){
	
	course myCourse;
	
	myCourse.courseName = "Data Structures";
	myCourse.courseCode = "CSDS 233";
	myCourse.maxOccupancy = 200;
	myCourse.currOccupancy = 175;
	myCourse.instructor = "Dr Rohan Singh";
	myCourse.department = "Department of Computer Science";

	std::cout<<"Course Name: "<<myCourse.courseName<<"\n";
	std::cout<<"Course Code: "<<myCourse.courseCode<<"\n";
	std::cout<<"\tOccupancy: "<<myCourse.currOccupancy<<"/"<<myCourse.maxOccupancy<<"\n";
	std::cout<<"\tInstructor: "<<myCourse.instructor<<"\n";
	std::cout<<"\tDepartment: "<<myCourse.department<<"\n";

	
	return 0;
}


