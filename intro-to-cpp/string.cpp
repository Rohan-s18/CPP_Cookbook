// author: rohan singh
// including the string library
#include <string>
#include <iostream>

int main(){
	
	std::string g1 = "hello";
	std::string g2 = "world";
	std::string greeting = g1 + " " + g2 + "\n";
	std::cout<<greeting;
	
	std::string message = "my name is ";
	std::string name = "rohan singh\n";
	message = message.append(name);
	std::cout<<message;
	
	std::cout<<"greeting length: "<<greeting.length()<<"\n";
	std::cout<<"message length: "<<message.size()<<"\n";
	
	std::cout<<"third character of greeting: "<<greeting[2]<<"\n";
	std::cout<<"third last character of message: "<<message[message.length()-4]<<"\n";
	
	return 0;

}
