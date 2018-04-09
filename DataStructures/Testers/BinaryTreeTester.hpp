//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Johnsen, Matthew on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/Structures/NonLinear/BinarySearchTree.hpp"
#include <iostream>

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> numberTree;
    BinarySearchTree<string> wordTree;
public:
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */
