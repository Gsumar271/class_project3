//
//
//  Created by Eugene Sumaryev
//  Copyright © 2019 com.eugene. All rights reserved.
//

#include <stdio.h>
#include <cassert>
#include <cstdlib>
#include "BSTclass.h"
#include <iostream>

#include "BinaryTree.h"



namespace ClassProgram
{
    
    BSTclass:: BSTclass() {
        rootPtr = NULL;
    }
    
    BSTclass::~BSTclass()
	// Header file used: bintree.h
	{
	    treeClear(rootPtr);
	}

    /*
	void BSTclass::add(const valueTypeWeight& weightData)
	// Header file used: bintree.h
	{
	    BinaryTree *cursor;
        BinaryTree *newNode;

	    if (rootPtr == NULL)
	    {   // Add the first node of the binary search tree:
            rootPtr = new BinaryTree(weightData);
    		return;
	    }

	    else
	    {   // Move down the tree and add a new leaf:
        cursor = rootPtr;
        bool done = false;

        while(!done){
          if(cursor->getData() > weightData) {
            if(cursor->getLeft() == NULL){
                newNode = new BinaryTree(weightData);
                cursor->setLeft(newNode);
              done = true;
             }
            else
              cursor=cursor->getLeft();
          }
          if(cursor->getData() < weightData) {
            if(cursor->getRight() == NULL){
                newNode = new BinaryTree(weightData);
                cursor->setRight(newNode);
              done = true;
              }
            else
              cursor = cursor->getRight();
          }
        }

	    }
	}
     */
    
    void BSTclass::addName(const valueTypeName& nameData, const valueTypeWeight& weightData)
    //
    {
        BinaryTree *cursor;
        BinaryTree *newNode;
        
        if (rootPtr == NULL)
        {   // Add the first node of the binary search tree:
            rootPtr = new BinaryTree(nameData, weightData);
            return;
        }
        
        else
        {   // Move down the tree and add a new leaf:
            cursor = rootPtr;
            bool done = false;
            
            while(!done){
                if(cursor->getData().compare(nameData) > 0) {
                    if(cursor->getLeft() == NULL){
                        newNode = new BinaryTree(nameData, weightData);
                        cursor->setLeft(newNode);
                        done = true;
                    }
                    else
                        cursor=cursor->getLeft();
                }
                if(cursor->getData().compare(nameData) <= 0) {
                    if(cursor->getRight() == NULL){
                        newNode = new BinaryTree(nameData, weightData);
                        cursor->setRight(newNode);
                        done = true;
                    }
                    else
                        cursor = cursor->getRight();
                }
            }
            
        }
    }
    
    
    
    void BSTclass::print(){
        
        //perform all the traversals
        cout<<"Preorder taversal:\n";
        preorder(rootPtr);
        cout<<"\nInorder taversal:\n";
        inorder(rootPtr);
        cout<<"\nPostorder taversal:\n";
        postorder(rootPtr);
        cout<<endl;
        printTree(rootPtr, 0);
        cout<<endl;
       // ClassProgram::print(rootPtr);
        
    }
    
    void BSTclass::getHeight(/*BinaryTree* root*/){
        //traverse a tree until you reach a leaf
        //using inorder. the amount of nodes it takes
        //to reach a leaf from left or right side is the height
        //formula which calculates log of nodes base 2
        //need a height attribute that adds 1 to height each time
        // amount of nodes is doubled.
        //if count >= 2 * count
        //height++; count = 2 * count;
        
        cout << "The height of the tree is: "<< treeHeight(rootPtr);
        cout<<endl;
        
    }
    
    void BSTclass::getNumLeaves(){
        cout << "The number of leaves in the tree is: " << countLeaves(rootPtr);
        cout << endl;
        
    }
    
    void BSTclass::nameSearch(string nameData){
        
        BinaryTree *cursor;
        BinaryTree *foundNode = NULL;
        
        if (rootPtr == NULL)
        {   // Check to see if the tree is empty
            cout<<" The following name is not in the tree " << endl;
            return;
        }
        
        else
        {   // Move down the tree and search a new leaf:
            cursor = rootPtr;
            bool done = false;
            
            while(!done){
                
                if(cursor->getData().compare(nameData) == 0){
                    foundNode = cursor;
                    done = true;
                    
                }
                else if(cursor->getData().compare(nameData) > 0) {
                    if(cursor->getLeft() == NULL){
                        done = true;
                    }
                    else
                        cursor=cursor->getLeft();
                }
                else /*(cursor->getData().compare(nameData) > 0) */ {
                    if(cursor->getRight() == NULL){
                        done = true;
                    }
                    else
                        cursor = cursor->getRight();
                }
            }
            
        }

        if (foundNode != NULL)
            cout << "Found name: " <<foundNode->getData() <<" weight is : "<< foundNode->getWeight() << endl;
        else
            cout << "No name found" << endl;
        
    }
    
    void BSTclass::smallestWeight(){
        
        findWeight(rootPtr);
        cout << "The Smallest weight is " << BinaryTree::smallest->getWeight()<< " under the name  " << BinaryTree::smallest->getData() <<endl;
        
    }
    
    void BSTclass::findFirstName(){
        
        BinaryTree *cursor;
        
        if (rootPtr == NULL)
        {   // check if the tree is empty:
            cout<<" The tree is empty " << endl;
            return;
        }
        
        else
        {   // Look for the leftmost node, it will have the smallest name value:
            cursor = rootPtr;
            
            while(cursor->getLeft() != NULL){
                cursor=cursor->getLeft();
            }
        }

        cout << "The first name in alphabetic order is " <<cursor->getData()<< endl;
        
    }
}
















