//
// Created by Zchary on 2021/4/5.
//

#ifndef C_NODE_H
#define C_NODE_H

#include "../typedef.h"

typedef struct Node {
    elemType elem;
    struct Node *next;
} Node, *NodePtr;

typedef NodePtr LinklistPtr // δΊιζι
#endif //C_NODE_H
