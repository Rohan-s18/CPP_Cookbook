// author: rohan singh
// cpp code for math stuff

#include <iostream>
#include <cmath>

void power_funcs(float x){
	std::cout<<"\tthe absolute value of "<<x<<" is: "<<abs(x)<<"\n";
	std::cout<<"\tthe square of "<<x<<" is: "<<pow(x,2)<<"\n";
	std::cout<<"\tthe inverse of "<<x<<" is: "<<pow(x,-1)<<"\n";
	std::cout<<"\tthe square root of "<<x<<" is: "<<sqrt(x)<<"\n";
}

void trig_funcs(float x){
	std::cout<<"\tthe sine of "<<x<<" is: "<<sin(x)<<"\n";
	std::cout<<"\tthe arcsine of "<<x<<" is: "<<asin(x)<<"\n";
	std::cout<<"\tthe hyperbolic sine of "<<x<<" is: "<<sinh(x)<<"\n";
	std::cout<<"\tthe hyperbolic arcsine of "<<x<<" is: "<<asinh(x)<<"\n";
}

void exponent_funcs(float x){
	std::cout<<"\te to the power "<<x<<" is: "<<exp(x)<<"\n";
	std::cout<<"\t2 to the power "<<x<<" is: "<<exp2(x)<<"\n";
	std::cout<<"\tthe natural log of "<<x<<" is: "<<log(x)<<"\n";
	std::cout<<"\tthe base 10 log of "<<x<<" is: "<<log10(x)<<"\n";
}

void misc_funcs(float x){
	std::cout<<"\tthe error function value of "<<x<<" is: "<<erf(x)<<"\n";
	std::cout<<"\tthe complimentary error function vlaue of "<<x<<" is: "<<erfc(x)<<"\n";
	std::cout<<"\tthe gamma function value of "<<x<<" is: "<<tgamma(x)<<"\n";
	std::cout<<"\tthe logarmithm of the gamma function of "<<x<<" is: "<<lgamma(x)<<"\n";
}


int main(){
	std::cout<<"power functions:\n";
	power_funcs(-12.3);
	std::cout<<"triginometric functions:\n";
	trig_funcs(0.5);
	std::cout<<"exponent functions:\n";
	exponent_funcs(18.11);
	std::cout<<"miscellaneous functions:\n";
	misc_funcs(2.1);
	return 0;
}
