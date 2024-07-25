// author: rohan singh
// c++ code for arrays



#include <iostream>
#include <string>



int main(){
	
	std::string names[] = {"rohan","rachel","emile","jindol","konkel"};
	int nums[11] = {-3,4,7,-2,5,19,-11,18,9,10,11};

	for (int i = 0; i < 5; i++)
		std::cout<<names[i]<<"\n";

	for (int score : nums)
		std::cout<<score<<" ";

	std::cout<<"\n";
	
	std::cout<<"we have "<<sizeof(nums)/sizeof(int)<<" numbers with us\n";

	return 0;

}



