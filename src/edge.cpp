#include "edge.h"

Edge::Edge(int x1, int y1, int x2, int y2) :
    pNode_1(new Node(x1, y1)), pNode_2(new Node(x2, y2))
{}

Edge::~Edge() {
    delete pNode_1;
    delete pNode_2;
}