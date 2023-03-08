#include "automat.h"
#include <iostream>
using namespace std;

const int MAX_NODES = 100;

int main()
{
    vector<Node> automat;
    for(int i = 0; i < MAX_NODES; i++){
        Node newNode(MAX_NODES, i);
        automat.push_back(newNode);
        cout << "GATA NODU FRATE" << endl;
    }
    return 0;
}
