// author: rohan singh
// c++ code for data class



#include <iostream>
#include <string>



class Course {

    public:

        int capacity;
        int seatsTaken;
        std::string courseName;
        std::string courseCode;
        std::string department;
        std::string instructor;

        Course();

        Course(int capacity, int seatsTaken, std::string courseName, std::string courseCode, std::string department, std::string instructor="TBD"){
            this->capacity = capacity;
            (*this).seatsTaken = seatsTaken;
            this->courseCode = courseCode;
            this->courseName = courseName;
            this->department = department;
            this->instructor = instructor;
        }

        float percentageFilled(){
            return (float(this->seatsTaken)/float(this->capacity))*100;
        }

        void printMessage();

    private:
        float rating;

};



void printCourse(Course* myCourse);



int main(){

    Course myCourse;
    myCourse.capacity = 200;
    myCourse.seatsTaken = 175;
    myCourse.courseCode = "CSDS 233";
    myCourse.courseName = "Data Structures";
    myCourse.instructor = "Rohan Singh";
    myCourse.department = "Department of Computer Science";

    std::cout<<"Course Name: "<<myCourse.courseName<<"\n";
    std::cout<<"\t\t\t\tCourse Code    : "<<myCourse.courseCode<<"\n";
    std::cout<<"\t\t\t\tOccupancy Name : "<<myCourse.seatsTaken<<"/"<<myCourse.capacity<<"\n";
    std::cout<<"\t\t\t\tInstructor Name: "<<myCourse.instructor<<"\n";
    std::cout<<"\t\t\t\tDepartment     : "<<myCourse.department<<"\n";
    std::cout<<"\n";

    Course myCourse2(100,80,"Introduction to Operating Systems","CSDS 338", "Department of Computer Science");
    printCourse(&myCourse2);
    std::cout<<"\n";

    std::cout<<myCourse.courseName<<" is "<<myCourse.percentageFilled()<<"% filled\n";
    std::cout<<myCourse2.courseName<<" is "<<myCourse2.percentageFilled()<<"% filled\n";
    std::cout<<"\n";

    myCourse.printMessage();
    myCourse2.printMessage();


    return 0;

}



void printCourse(Course* course){

    std::cout<<"Course Name: "<<(*course).courseName<<"\n";
    std::cout<<"\t\t\t\tCourse Code    : "<<course->courseCode<<"\n";
    std::cout<<"\t\t\t\tOccupancy Name : "<<course->seatsTaken<<"/"<<course->capacity<<"\n";
    std::cout<<"\t\t\t\tInstructor Name: "<<course->instructor<<"\n";
    std::cout<<"\t\t\t\tDepartment     : "<<course->department<<"\n";

}


Course::Course(){
    std::cout<<"You have used the default constructor, do not forget to fill in the instance fields.\n\n";
}



void Course::printMessage(){
    std::cout<<"hello world!\n";
}


