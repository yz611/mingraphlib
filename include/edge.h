#ifndef EDGE_H
#define EDGE_H

#include "node.h"

class Edge
{

protected:
    Node* pNode_1;
    Node* pNode_2;
    int n_set;
public:
    Edge(int x1, int y1, int x2, int y2);
    ~Edge();

};

#endif