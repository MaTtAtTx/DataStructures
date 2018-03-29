//
//  BinarySearchTree.hpp
//  DataStructures
//
//  Created by Johnsen, Matthew on 3/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include "Tree.hpp"
#include <iostream>

using namespace std;

template<class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removedNode(BinaryTreeNode<Type> * removeMe);
    
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    void setRoot(BinaryTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalStep(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    void insert(Type itemToInsert);
    bool contains(Type value);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
};

template <class Type>
BinarySearchTree<Type> :: BinarySearchTree()
{
    this->root = nullptr;
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if (current == nullptr)
    {
        this->root = insertMe;
    }
    else
    {
        while (current != nullptr)
        {
            previous = current;
            if (itemToInsert < current->getData())
            {
                current = current->getLeftNode();
            }
            else if (itemToInsert > current->getData())
            {
                current = current->getRightNode();
            }
            else //Remove cerr after verification of understanding
            {
                cerr << "Item exists already - Exiting insert" << endl;
                delete insertMe;
                return; //Okay because it is returning NOTHING
            }
        }
        
        if (previous->getData() > itemToInsert)
        {
            previous->setLeftNode(insertMe);
        }
        else
        {
            previous->setRightNode(insertMe);
        }
        insertMe->setRootNode(previous);
    }
}

template<class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    
}

template<class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    
}

template <class Type>
BinarySearchTree<Type> :: ~BinarySearchTree()
{
    
}

template<class Type>
bool BinarySearchTree<Type> :: contains(Type value)
{
    return false;
}

template<class Type>
void BinarySearchTree<Type> :: remove(Type item)
{
    
}

template<class Type>
int BinarySearchTree<Type> :: getSize()
{
    return -1;
}

template<class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return -1;
}

template<class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    return false;
}

template<class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return false;
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    inOrderTraversal(this->root);
}

/*
 In order traversal goes in the order Left, Root, Right
 Notice that the non-revursive case does NOTHING
 */
template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinaryTreeNode<Type> * inStart)
{
    if (inStart != nullptr)
    {
        cout << "Checking left" << endl;
        inOrderTraversal(inStart->getLeftNode());
        cout << "Node Contents: " << inStart->getData() << endl;
        cout << "Checking right" << endl;
        inOrderTraversal(inStart->getRightNode());;
    }
    else
    {
        cout << "Empty sub tree - leave" << endl;
    }
}

#endif /* BinarySearchTree_hpp */
