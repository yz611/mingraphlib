#ifndef GRAPH_H
#define GRAPH_H

#include "node.h"
#include "edge.h"

struct Graph
{
    Graph(int n_nodes);
    Node** GetNodes();
    Edge** GetEdges();

protected:
    Node** m_Nodes;
    Edge** m_Edges;

};

#endif