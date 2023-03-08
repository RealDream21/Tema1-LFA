#include <iostream>
#include "automat.h"
using namespace std;

Node::Node(const int NODES_SIZE, const int id){
    next = new vector<string>[NODES_SIZE];
    identifier = id;
    nextArrSize = NODES_SIZE;
    cout << "Created new node\n";
}

void Node::setInit(const int NODES_SIZE, const int id){
    next = new vector<string>[NODES_SIZE];
    identifier = id;
    nextArrSize = NODES_SIZE;
    cout << "Set new node\n";
}

Node::~Node(){
    delete [] next;
    cout << "Deleted node\n";
}

void Node::addVertex(const string vertexName, const int to){
    //add a vertex between q0 and q1
    next[to].push_back(vertexName);
    cout << "Created vertex between " << identifier << " " << to << endl;
}

void Node::showVertexes() const{
    //debugging for showing all vertexes
    for(int i = 0; i < nextArrSize; i++){
        cout << next[i].size() << " ";
    }
    cout << endl;
}

bool Node::hasVertex(const Node& other) const{
    //return whether or not a vertex exists between q0 and q1
    if (next[other.identifier].size() != 0) return 1;
    else return 0;
}
/*
Node& Node::nextNode(const string letter) const{
    *this.hasVertex(letter) ? return


}*/

