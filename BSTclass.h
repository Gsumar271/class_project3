//
//  Created by Eugene Sumaryev 
//  Copyright © 2019 com.eugene. All rights reserved.
//

#ifndef BSTclass_h
#define BSTclass_h

#include <string>
#include <cstdlib>     //
#include "BinaryTree.h"   // Provides binaryTree and related functions

namespace ClassProgram
{
    class BSTclass
    {
    public:
        // TYPEDEF
        typedef std::string valueTypeName;
        typedef double valueTypeWeight;

        
        // CONSTRUCTORS and DESTRUCTOR
        BSTclass();
        ~BSTclass();
        // MODIFICATION functions
        void add(const valueTypeWeight& weightData);
        void addName(const valueTypeName& nameData, const valueTypeWeight& weightData);
        void nameSearch(string name);
        void print();
        void getHeight();
        void getNumLeaves();
        void smallestWeight();
        void findFirstName();
        
    private:
        BinaryTree *rootPtr; // Root pointer of binary search tree
       // valueTypeName name;
      //  valueTypeWeight weight;
    };
    

}

#endif /* BSTclass_h */
