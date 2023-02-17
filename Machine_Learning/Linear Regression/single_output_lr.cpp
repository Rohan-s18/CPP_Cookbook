//  Author: Rohan Singh
//  Feb 17, 2023

//  Imports
#include <iostream>

using namespace std;

class NeuralNetwork{
    
    private:
    int* weights;
    int dim;

    public:
    
    NeuralNetwork(int dimensions){
        this->dim = dimensions;
        weights = new int[this->dim];

    }

    int get_NN_output(int vec[]){
        for(int i = 0; i < dim; i++){

        }
        return 0;
    }

    int get_dimensions(){
        return this->dim;
    }

    int* get_weights(){
        return this->weights;
    }

    void print_weights(){
        for(int i = 0; i < this->dim; i++){
            cout<<this->weights[i];
            cout<<" ";
        }
        cout<<"\n";
    }


};

int main(){

    NeuralNetwork* NN = new NeuralNetwork(10);

    NN->print_weights();

    return 0;
}