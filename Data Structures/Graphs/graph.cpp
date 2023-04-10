//  Author: Rohan Singh
//  Code for Graphs in C++
//  Date: April 10, 2023


//  Imports
#include <iostream>
#include <cstdlib>

#define MAXNODES 100

using namespace std;


//  Class for Edges
class Edge{
    
    public:

    int toIndex;
    int fromIndex;
    int cost;

    //Pointer to the next Node
    Edge* next;

    Edge(int to, int from, int c){
        this->toIndex = to;
        this->fromIndex = from;
        this->cost = c;
        this->next = NULL;
    }

};


//  Class for Vertices
class Vertex{
    
    public: 

    string name;
    int index;
    Edge* adj_list;


    Vertex(string n, int i){
        this->index = i;
        this->name = n;
        this->adj_list = NULL;
    }

};


//  Class for the Graph ADT implementation
class Graph{

    //This section will contain the private fields and helper methods
    private:

    //Array of vertices (graph)
    Vertex graph[MAXNODES];
    
    int size;

    //Helper function to return the index of a given Vertex in the Array Representation of the graph
    int indexof(string vert_name){

        for(int i = 0; i < this->size; i++){

            if(graph[i].name == vert_name){
                return i;
            }

        }

        return -1;

    }

    public:

    //  Function to add a Vertex to the graph
    bool add(string v_name){

        //Returning false if the graph is full or the vertex already exists
        if(this->size >= MAXNODES || this->indexof(v_name) != -1){
            return false;
        }


        //Adding the vertex to the grpah and updating the properties
        Vertex* temp = new Vertex(v_name, this->size);
        graph[size] = *temp;

        this->size++;

        return true;

    }


};


//  Main function
int main(){

    return 0;

}
