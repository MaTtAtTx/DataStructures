//
//  ArrayTester.cpp
//  DataStructures
//
//  Created by Johnsen, Matthew on 2/6/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "ArrayTester.hpp"

void ArrayTester :: testArrayUse()
{
    Array<int> firstArray(10);
    
    for (int index = 0; index < 10; index++)
    {
        firstArray.setAtIndex(index, index);
    }
    
    for (int index = 0; index < firstArray.getSize(); index++)
    {
        cout << firstArray[index] << endl;
    }
    
    Array<int> secondArray(400);
    
    cout << secondArray.getSize() << endl;
    cout << firstArray.getSize() << endl;
    
    Array<int> thirdArray(secondArray);
    
    cout << thirdArray.getSize() << endl;
    firstArray = thirdArray;
    cout << firstArray[4] << endl;
    
    thirdArray[5] = 123;
    cout << thirdArray[5] << endl;
}

void ArrayTester :: testAdvancedArray()
{
    Array<int> testArray(12);
    for (int index = 0; index < testArray.getSize(); index++)
    {
        testArray.setAtIndex(index, index);
    }
    
    int testHolder;
    testHolder = testArray.getFromIndex(7);
    cout << "The value in testHolder is " << testHolder << endl;
}
