//
//  main.cpp
//  TreesPractice
//
//  Created by Eugene Sumaryev on 3/13/19.
//  Copyright © 2019 com.eugene. All rights reserved.
//



#include <iostream>
#include <cstdlib>
#include "BSTclass.h"
#include "BinaryTree.h"
#include "BinaryTreeArray.h"

using namespace std;
using ClassProgram::BSTclass;
//using classWork::BinaryTreeArray;

int main(int argc, const char * argv[]) {
    

    /*
    double num;
    int randomCounter = 0;
    cout << "Here is a binary search tree!\n";
    
    BSTclass bst;
   // BinaryTreeArray bta;
    
    //get all the numbers from the console input
    for (int i=0; i<5; i++){

        cin >> num;
        bst.add(num);
        randomCounter = i;
    }
    
 //  bta.addLeft(3, 12);
 //  bta.addRight(3, 15);
    
    bst.add(12);
    bst.add(15);
    bst.add(20);
    
    bst.print();
    
    
    
   // preorder(&bta, 0);
    bst.getHeight();
     
 
        
    */
    string name;
    int weight;
    BSTclass bst;
   
    int randomCounter = 0;
    cout << "Binary search tree demo!\n";
    

    cout << "Please enter 15 names and corresponding weights\n";
    
    //1)
    //Get all the entries form the console input
    for (int i=0; i<15; i++){
        
        cout <<"Name: ";
        cin >> name;
        cout << "Weight: ";
        cin >> weight;
        cout << endl;
        bst.addName(name, weight);
        randomCounter = i;
    }
    
    //2) 3) and 4)
    //perform preorder, inorder and postorder traversals
    bst.print();
    
    //5)get the height of the tree
    bst.getHeight();
    
    //6)get number of leaves
    bst.getNumLeaves();
    
    //7)Search for a name
    cout<<"Please enter a name to search: ";
    cin >> name;
    bst.nameSearch(name);
    
    //8)Get lowest weight
    bst.smallestWeight();
    
    //9)Find the first name in alphabetical order
    bst.findFirstName();
    
    
    
    
    
    
    return 0;

}
