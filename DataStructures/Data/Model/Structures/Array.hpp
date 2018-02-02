//
//  Array.hpp
//  DataStructures
//
//  Created by Johnsen, Matthew on 2/2/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <stdio.h>
#include <assert.h> //Used for validating user supplied data.
#include <iostream> //Used from tracing and debug statements.

using namespace std;

template <class type>
class Array
{
private:
    Type * internalArray
    int size;
public:
    //Constructor
    Array<Type>(int size);
    
    //Copy Constructor
    Array<Type>(const Array<Type> & toCopy)
    //Destructor
    ~Array<Type>();
    
    //Operators
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    
    //Methods
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
};

template <class Type>
Array<Type> :: Array(int size)

#endif /* Array_hpp */
