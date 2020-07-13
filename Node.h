//
// Created by Naren Kolli on 2020-05-26.
//

#ifndef FLIP_NODE_H
#define FLIP_NODE_H

#ifndef NULL

#include <cstddef>

#endif  // NULL

template <typename nodeType> //node of linked list
class node {
public:
    nodeType nodeVal;
    node<nodeType> *followingNode;    // next node of linked list

    // default constructor with no initial value
    node():followingNode(NULL) {

    }


    node(const nodeType& currentNode, node<nodeType> *nextNode = NULL) : //constructor
            nodeVal(currentNode), followingNode(nextNode) {

    }

};


#endif //FLIP_NODE_H
