#include "node.h"

Node::Node(int x, int y): 
m_pCoordinate(new Coordinate(x, y)) {}

Node::~Node()
{
}
