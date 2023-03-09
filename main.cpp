#include "automat.h"
#include <iostream>
using namespace std;

//MAYBE USE EXTERN CONST INT ???

extern const int MAX_NODES = 100;

int main()
{
    int n = MAX_NODES;
    Node curentNode;
    Node automat[MAX_NODES];
    for(int i = 0; i < n; i++){
        automat[i].setInit(i);
    }
    automat[1].addVertex("a", 11);
    automat[1].addVertex("b", 11);



    return 0;
}
