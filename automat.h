#include <string>
#include <vector>

class Node{
    std::vector <std::string> *next;
    int identifier;
    int nextArrSize;
public:
    Node(const int, const int);
    ~Node();
    void addNode(std::string, int);
    void showVertexes()const;
};
