// Graph Traversal 1 hous 35 minutes

struct node {
    int vertex;
    node *next;

};

class AdjList
{
private:
    node *start;
    
public:
    AdjList(){}
    ~AdjList(){}
};


class Graph{
private:
    int v_count;
    AdjList *arr;
public:
    Graph();
    ~Graph();
};

Graph::Graph()
{
}

Graph::~Graph()
{
}





