#include "automat.h"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

//MAYBE USE EXTERN CONST INT ???

ifstream fin("automat_input.txt");

extern const int MAX_NODES = 100;

int str_to_int(char *);
void citire(int&, int&, int&, int *f, ifstream&);


int main()
{
    ifstream fin("automat_input.txt");
    int nr_noduri, id_nod_initial, nr_noduri_finale;
    int f[nr_noduri_finale];
    citire(nr_noduri, id_nod_initial, nr_noduri_finale, f, fin);
    /*cout << nr_noduri << id_nod_initial << nr_noduri_finale << endl;
    for(int i = 0; i < nr_noduri_finale; i++){
        cout << f[i];
    }*/
    activeNode curentNode = id_nod_initial;
    Node automat[nr_noduri];
    for(int i = 0; i < nr_noduri; i++)
        automat[i].setInit(i);
    char *p, *q;
    int nr_tranzitii;
    p = new char[150];
    q = new char[150];
    for(int i = 0; i < nr_noduri; i++){
        fin >> nr_tranzitii;
        for(int j = 0; j < nr_tranzitii; j++){
            fin >> p >> q;
            automat[i].addVertex(p, str_to_int(q));
        }
    }
    fin.close();

    ifstream fin1("cuvinte_input.txt");
    while (fin1 >> p)
    {
        cout << p << endl;
    }





    return 0;
}

int str_to_int(char *p)
{
    int nr = 0;
    for(int i = 0; i < strlen(p); i++)
        nr = nr * 10 + p[i] - '0';
    return nr;
}

void citire(int& nr_noduri, int& id_nod_initial, int& nr_noduri_finale, int* f, ifstream& fin)
{
    char *p;
    p = new char[100];
    fin >> p;
    nr_noduri = str_to_int(p);
    fin >> p;
    id_nod_initial = str_to_int(p);
    fin >> p;
    nr_noduri_finale = str_to_int(p);
    for(int i = 0; i < nr_noduri_finale; i++){
        fin >> p;
        f[i] = str_to_int(p);
    }

    delete [] p;
    return;
}
