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

int Node::getIdentifier()const{return identifier;}

Node& Node::nextNode(const string transition, Node* automat)const{
    for(int i = 0; i < MAX_NODES; i++){
        for(int j = 0; j < next[i].size(); j++)
        {
            if(next[i][j] == transition)
                return automat[i];
        }
    }
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

bool Node::hasVertexNamed(const string s)const{
    for(int i = 0; i < MAX_NODES; i++)
        for(int j = 0; j < next[i].size(); j++)
            if(next[i][j] == s) return true;
    return false;
}

Node& Node::operator=(const Node& other){
    identifier = other.identifier;
    for(int i = 0; i < MAX_NODES; i++)
        for(int j = 0; j < next[i].size(); j++)
            next[i][j] = other.next[i][j];
    cout << "Copied node\n";
    return *this;
}

activeNode::activeNode(const int a){
    id = a;
}

/*
Node& Node::nextNode(const string letter) const{
    *this.hasVertex(letter) ? return
}*/

