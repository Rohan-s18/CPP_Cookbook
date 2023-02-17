//  Author: Rohan Singh
//  Feb 17, 2023

//  Imports
#include <iostream>

using namespace std;


//  Class for Neural Networks
class NeuralNetwork{
    
    // Instance Fields
    private:


    double* weights;
    int dim;
    double epsilon;

    // Methods
    public:
    
    NeuralNetwork(int dimensions, double eps){
        this->dim = dimensions;
        weights = new double[this->dim];
        this->epsilon = eps;
    }

    int get_NN_output(double vec[]){
        double output = 0;
        for(int i = 0; i < dim; i++){
            output+=(this->weights[i])*(vec[i]);
        }
        return output;
    }

    int get_dimensions(){
        return this->dim;
    }

    double* get_weights(){
        return this->weights;
    }

    void print_weights(){
        for(int i = 0; i < this->dim; i++){
            cout<<this->weights[i];
            cout<<" ";
        }
        cout<<"\n";
    }

    void update_weights(double gradient[]){
        for(int i = 0; i < this->dim; i++)
            this->weights[i]-=(this->epsilon*gradient[i]);
    }

    void set_weights(double* temp_weight){
        this->weights = temp_weight;
    }


};


//  Testing method
void test();


int main(){

    test();
    
    return 0;
}


void test(){

    NeuralNetwork* NN = new NeuralNetwork(10,0.1);

    NN->print_weights();

    double temp[] = {1.0,1.0,1.0,2.0,3.0,1.0,1.0,1.0,2.0,3.0};

    NN->set_weights(temp);

    NN->print_weights();

    double input[] = {1.0,1.0,1.0,2.0,3.0,1.0,1.0,1.0,2.0,3.0};

    cout<<NN->get_NN_output(input);

    cout<<"\n";

    NN->update_weights(input);

    NN->print_weights();

}