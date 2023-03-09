#include "automat.h"
#include <iostream>
using namespace std;

extern const int MAX_NODES;

Node::Node(const int id){
    next = new vector<string>[MAX_NODES];
    identifier = id;
    cout << "Created new node at " << next << "\n";
}

Node::Node(){
    cout << "Created node array item\n";
    next = new vector<string>[MAX_NODES];
}

void Node::setInit(const int id){
    ///next = new vector<string>[MAX_NODES];
    identifier = id;
    //cout << "Set new node\n";
}

Node::~Node(){
    //cout << "Deleted node\n";
}

void Node::addVertex(const string vertexName, const int to){
    //add a vertex between q0 and q1
    next[to].push_back(vertexName);
    cout << "Created vertex: " << identifier << "->" << to << endl;
    return;
}

void Node::showVertexes() const{
    //debugging for showing all vertexes
    for(int i = 0; i < MAX_NODES; i++){
        cout << next[i].size() << " ";
    }
    cout << endl;
}

bool Node::hasVertex(const Node& other) const{
    //return whether or not a vertex exists between q0 and q1
    if (next[other.identifier].size() != 0) return 1;
    else return 0;
}

Node& Node::operator=(const Node& other){
    identifier = other.identifier;
    delete [] next;
    next = other.next;
    cout << "Copied node\n";
    return *this;
}

/*
Node& Node::nextNode(const string letter) const{
    *this.hasVertex(letter) ? return


}*/

