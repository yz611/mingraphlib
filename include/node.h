#ifndef NODE_H
#define NODE_H

#include "coordinate.h"

class Node
{
protected:
    Coordinate* m_pCoordinate;

public:
    Node(int x, int y);
    ~Node();
};

#endif // NODE_H
