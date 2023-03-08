#include <string>
#include <vector>

class Node{
    std::vector <std::string> *next;
    int identifier;
    int nextArrSize;
public:
    Node(const int, const int);
    ~Node();
    void addVertex(const std::string, const int);
    void showVertexes()const;
    bool hasVertex(const Node&)const;
    void setInit(const int, const int);
    /*Node& nextNode(const string)const;*/
};
