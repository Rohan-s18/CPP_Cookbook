// author: rohan singh
// c++ code to demonstrate inheritence



#include <iostream>
#include <string>



class Animal{

    public:

        std::string name;
        int height;
        int weight;

        Animal(){}

        Animal(int height, int weight, std::string name){
            this->height = height;
            this->weight = weight;
            this->name = name;
        }

        void play(){
            std::cout<<"I like to play!\n";
        }

        void talk();

        void printAnimalCard(){
            std::cout<<"Name: "<<this->name<<"\n";
            std::cout<<"\t\tSize: "<<this->weight<<"lbs & "<<this->height<<" inches\n";
        }

};



class Dog : public Animal{

    public:

        std::string breed;

        Dog(int height, int weight, std::string name, std::string breed){
            this->height = height;
            this->weight = weight;
            this->name = name;
            this->breed = breed;
        }

        void talk(){
            std::cout<<"Woof Woof!\n";
        }

        void printAnimalCard(){
            std::cout<<"Name: "<<this->name<<"\n";
            std::cout<<"\t\tBreed: "<<this->breed<<"\n";
            std::cout<<"\t\tSize: "<<this->weight<<"lbs & "<<this->height<<" inches\n";
        }

};



class Cat : public Animal{

    public:

        std::string breed;

        Cat(int height, int weight, std::string name, std::string breed){
            this->height = height;
            this->weight = weight;
            this->name = name;
            this->breed = breed;
        }

        void talk(){
            std::cout<<"Meow!\n";
        }

        void printAnimalCard(){
            std::cout<<"Name: "<<this->name<<"\n";
            std::cout<<"\t\tBreed: "<<this->breed<<"\n";
            std::cout<<"\t\tSize: "<<this->weight<<"lbs & "<<this->height<<" inches\n";
        }

};



int main(){

    Animal testAnimal(60, 120, "fido");
    testAnimal.play();
    testAnimal.printAnimalCard();
    //testAnimal.talk();
    std::cout<<"\n";

    Dog testDog(60, 120, "foo", "golden retriever");
    testDog.play();
    testDog.talk();
    testDog.printAnimalCard();
    std::cout<<"\n";

    Cat testCat(36, 80, "bar", "calico");
    testCat.play();
    testCat.talk();
    testCat.printAnimalCard();
    std::cout<<"\n";

    Animal* testAnimal2 = new Dog(60, 120, "fifi", "labrador");
    testAnimal2->play();
    testAnimal2->printAnimalCard();
    //testAnimal2->talk();
    std::cout<<"\n";





    return 0;

}


