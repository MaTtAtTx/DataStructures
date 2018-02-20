//
//  LinkedListTester.hpp
//  DataStructures
//
//  Created by Johnsen, Matthew on 2/14/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef LinkedListTester_hpp
#define LinkedListTester_hpp

#include "../Model/Structures/Linear/LinkedList.hpp"
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"
#include "../Data/CrimeData.hpp"
#include <iostream>

using namespace std;

class LinkedListTester
{
public:
    void testListBasics();
    void testListStrings();
    void testListWithData();
};

#endif /* LinkedListTester_hpp */
