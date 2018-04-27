//
//  Hashtable.hpp
//  DataStructures
//
//  Created by Johnsen, Matthew on 4/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Hashtable_hpp
#define Hashtable_hpp

#include "../Nodes/HashNode.hpp"

template <class Type>
class Hashtable
{
private:
    HashNode<Type> * internalStorage;
    int size;
public:
    Hashtable();
    ~Hashtable();
};

template <class Type>
Hashtable<Type> :: Hashtable()
{
    internalStorage = new HashNode<Type>[101];
    size = 0;
}

template <class Type>
Hashtable<Type> :: ~Hashtable()
{
    delete [] internalStorage;
}

#endif /* Hashtable_hpp */
