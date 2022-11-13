
#include "graph.h"
#include "edge.h"

Graph::Graph(int n_nodes) :
    m_n_nodes(n_nodes)
{
    for (int i=0;i < n_nodes; ++i){
        m_ppNodes[i] = new Node(0,0);
    }

    int n_edges = n_nodes*n_nodes;

    for (int i=0;i < n_edges; ++i){
        m_ppEdges[i] = new Edge(0,0,0,0);
    }
}
