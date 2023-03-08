#include "automat.h"
#include <iostream>
using namespace std;

const int MAX_NODES = 100;


int main()
{
    Node automat[100];
    for(int i = 0; i < MAX_NODES; i++){
        automat[i].setInit(MAX_NODES, i);
    }
    automat[0].addVertex("a", 10);
    automat[10].addVertex("a", 0);
    cout << automat[5].hasVertex(automat[0]);

    return 0;
}
