#ifndef GRAPH_H
#define GRAPH_H

#include "node.h"
#include "edge.h"

class Graph
{
protected:
    Node** m_ppNodes;
    Edge** m_ppEdges;
    int m_n_nodes;

public:
    Graph(int n_nodes);
    Node* GetNodes();
    Edge* GetEdges();
    void InitNode(int x, int y);
    void Connect(Node* node_1, Node* node_2);


};

#endif