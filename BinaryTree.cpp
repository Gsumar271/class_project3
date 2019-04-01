//
//
//  Created by Eugene Sumaryev 
//  Copyright © 2019 com.eugene. All rights reserved.
//


#include <stdio.h>
#include <cassert>    //
#include <cstdlib>   //
#include <iomanip>    //
#include <iostream>   //
#include "BinaryTree.h"

namespace ClassProgram
{
   // static int leafCount = 0;
    BinaryTree* BinaryTree::smallest = NULL;
    
    void inorder(BinaryTree* nodePtr)
    {
        if (nodePtr != NULL)
        {
            inorder(nodePtr->getLeft());
            print(nodePtr);
            inorder(nodePtr->getRight());
        }
    }

    void postorder(BinaryTree* nodePtr)
    {
        if (nodePtr != NULL)
        {
            postorder(nodePtr->getLeft());
            postorder(nodePtr->getRight());
            print(nodePtr);
        }
    }

    void preorder(BinaryTree* nodePtr)
    {
        if (nodePtr != NULL)
        {
            print(nodePtr);
            preorder(nodePtr->getLeft());
            preorder(nodePtr->getRight());
        }
    }
    
    void print(BinaryTree* nodePtr)
    {
        if (nodePtr != NULL)
        {
            std::cout << nodePtr->getData() << " ";
        }
    }
    
    void treeClear(BinaryTree*& rootPtr)
    {
        BinaryTree* child;
        if (rootPtr != NULL)
        {
            child = rootPtr->getLeft();
            treeClear(child);
            child = rootPtr->getRight();
            treeClear(child);
            delete rootPtr;
            rootPtr = NULL;
        }
    }
    
    size_t treeSize(const BinaryTree* nodePtr)
    // Library facilities used: cstdlib
    {
        if (nodePtr == NULL)
            return 0;
        else
            return
            1 + treeSize(nodePtr->getLeft()) + treeSize(nodePtr->getRight());
    }
    
    size_t treeHeight(const BinaryTree* nodePtr){
        
        size_t sizeLeft;
        size_t sizeRight;
        
        if (nodePtr == NULL)
            return 0;
        
        else {
            sizeLeft = treeHeight(nodePtr->getLeft());
            sizeRight = treeHeight(nodePtr->getRight());
            
            return max(sizeLeft + 1, sizeRight + 1);
        }
        
        
        /*
        else if (nodePtr->getLeft() == NULL)
            return 1 + treeHeight(nodePtr->getRight());
        else
            return 1 + treeHeight(nodePtr->getLeft());
         */
    }
    
    size_t max(int numX, int numY){
       
        if(numX >= numY)
            return numX;
        else
            return numY;
    }
    
    int countLeaves(BinaryTree* nodePtr){
        int leafCount;
        
        if (nodePtr == NULL)
            return 0;
        else if (nodePtr->isLeaf())
            return 1;
        else {
            leafCount = countLeaves(nodePtr->getLeft()) + countLeaves(nodePtr->getRight());
            return leafCount;
        }
        
        /*
        
        if (nodePtr != NULL)
        {
            if (nodePtr->isLeaf())
                leafCount++;
            
            inorder(nodePtr->getLeft());
            print(nodePtr);
            inorder(nodePtr->getRight());
        }
        return leafCount;
         */
        
    }
    
    void checkSmallest(BinaryTree* nodePtr){
        if (BinaryTree::smallest == NULL || (nodePtr->getWeight() < BinaryTree::smallest->getWeight()))
            BinaryTree::smallest = nodePtr;
        
    }
    
    void findWeight(BinaryTree* nodePtr)
    {
        if (nodePtr != NULL)
        {
            checkSmallest(nodePtr);
            findWeight(nodePtr->getLeft());
            findWeight(nodePtr->getRight());
        }
    }
    
    
    
    /*
    BinaryTree* search(BinaryTree* nodePtr, string name, bool done, size_t size){
        
        
        if(nodePtr->getData() == name)
            done == true;
        
        while(!done)

        
        return nodePtr;
        
    }
     */
    
    /*
    void nameSearch(BinaryTree* nodePtr, string name){
        bool done = false;
        BinaryTree* foundNode;
        size_t size = treeSize(nodePtr);
        
        //check if tree is empty
        if (nodePtr != NULL)
            foundNode = search(nodePtr, name, done, size);
        else
            foundNode = NULL;
        
     
        if (nodePtr != NULL)
        {
            inorder(nodePtr->getLeft());
            print(nodePtr);
            inorder(nodePtr->getRight());
        }
     
        
    } 
     */
    
    void printTree(BinaryTree* nodePtr, int depth)
    // Library facilities used: iomanip, iostream, stdlib
    {
        if (nodePtr != NULL)
        {
            printTree(nodePtr->getRight(), depth+1);
            std::cout << std::setw(4*depth) << ""; // Indent 4*depth spaces.
            std::cout << nodePtr->getData() << std::endl;
            printTree(nodePtr->getLeft(),  depth+1);
        }
    }
    
    void printTreeBreadthFirst(BinaryTree* nodePtr, int depth){
        if(nodePtr != NULL){
            //enque level 0
            //deque, process
            //enque level 1 OR enque all the children of previous level
            //deque, process
        }
    }
    
    

}
