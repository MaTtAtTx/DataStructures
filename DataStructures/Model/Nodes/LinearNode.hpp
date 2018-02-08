//
//  LinearNode.hpp
//  DataStructures
//
//  Created by Johnsen, Matthew on 2/8/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp

#include <iostream>
#include "Node.hpp"

using namespace std;

template <class Type>
class LinearNode : public Node<Type>
{
    //This section is availabel to the subclasses of LinearNode
protected:
    LinearNode<Type> * next;
public:
    //Constructors
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    //Methods
    void setNextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
};

#endif /* LinearNode_hpp */
