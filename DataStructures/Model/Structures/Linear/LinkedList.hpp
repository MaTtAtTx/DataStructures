//
//  LinkedList.hpp
//  DataStructures
//
//  Created by Johnsen, Matthew on 2/14/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include "List.hpp"
#include "../../Nodes/LinearNode.hpp"
#include <iostream>
#include <assert.h>

using namespace std;

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    //Constructors
    LinkedList();
    //Destructor
    virtual ~LinkedList(); //Virtual so it can be overridden.
    //Helper Methods
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    //Structure Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
//    Type setAtIndex(int index, Type item);
//    bool contains(Type item);
};

#endif /* LinkedList_hpp */
