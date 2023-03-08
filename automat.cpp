#include <iostream>
#include "automat.h"
using namespace std;

Node::Node(const int NODES_SIZE, const int id){
    next = new vector<string>[NODES_SIZE];
    identifier = id;
    nextArrSize = NODES_SIZE;
    cout << "Created new node\n";
}

Node::~Node(){
    delete [] next;
    cout << "Deleted node\n";
}

void Node::addNode(string vertexName, int to){
    next[to].push_back(vertexName);
    cout << "Created vertex between " << identifier << " " << to << endl;
}

void Node::showVertexes() const{
    for(int i = 0; i < nextArrSize; i++){
        cout << next[i].size();
    }
}

