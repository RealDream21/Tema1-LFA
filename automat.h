#include <string>
#include <vector>

class Node{
    std::vector <std::string> *next;
    int identifier;
public:
    Node(const int);
    Node();
    ~Node();
    void addVertex(const std::string, const int);
    void showVertexes()const;
    bool hasVertex(const Node&)const;
    bool hasVertexNamed(const std::string s)const;
    void setInit(const int);
    Node& nextNode(const std::string, Node*)const;
    Node& operator=(const Node&);
    int getIdentifier()const;
    /*Node& nextNode(const string)const;*/
};

struct activeNode{
    int id;
    std::vector <int> road;
    activeNode(int);
};
