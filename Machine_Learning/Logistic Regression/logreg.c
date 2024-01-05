// Author: Rohan Singh
// Code for a logistic regression classifier using C
// Date: December 5, 2023
 

// Imports
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Function Definitions
double sigmoid(double x);
double predict_example(double* data, double* weights,int dim);
double* predict(double* data, double* weights, int dim, int len);
double* train(double* data, int len);


// Main Function
int main(){
	double data[] = {0.0,1.0,2.0,3.0,4.0};

	fprintf(stdout,"Value: %lf, Sigmoid Value: %lf\n", 1.0, sigmoid(1));

	double weight[] = {2};
	double point[] = {0.5};
	fprintf(stdout, "Value: %lf, Predicted Value: %lf\n",0.5,predict_example(point, weight, 1));

	return 0;
}


// Implementation of the sigmoid function
double sigmoid(double x){
	return 1/(1+exp(-x));
}


// Implementation of the predict function for a single example
double predict_example(double* data, double* weights, int dim){
	double z = 0;
	for(int i = 0; i < dim; i++)
		z += data[i]*weights[i];
	return sigmoid(z);
}

