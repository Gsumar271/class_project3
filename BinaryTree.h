//
//
//  Created by Eugene Sumaryev 
//  Copyright © 2019 com.eugene. All rights reserved.
//

#ifndef BinaryTree_h
#define BinaryTree_h
#include <cstdlib>  //
#include <map>
#include <string>
using namespace std;

namespace ClassProgram
{

    class BinaryTree
    {
    public:
        // TYPEDEF
       // typedef double valueType;
        typedef string valueTypeName;
        typedef int valueTypeWeight;
        static BinaryTree* smallest;
      //  static bool done = false;
        
        // CONSTRUCTOR
        BinaryTree(
                   const valueTypeName& initData = valueTypeName(),
                   const valueTypeWeight& initWeight = valueTypeWeight(),
                   BinaryTree* initLeft = NULL,
                   BinaryTree* initRight = NULL
                   )
        {
            dataField = initData;
            weightField = initWeight;
            leftField = initLeft;
            rightField = initRight;
        }
        // MODIFICATION MEMBER FUNCTIONS
        valueTypeName& getData() { return dataField; }
        valueTypeWeight& getWeight() { return weightField; }
        BinaryTree* getLeft() { return leftField; }
        BinaryTree* getRight() { return rightField; }
        
        void setData(const valueTypeName& newData) { dataField = newData; }
        void setWeight(const valueTypeWeight& newWeight) {weightField = newWeight; }
        void setLeft(BinaryTree* newLeft) { leftField = newLeft; }
        void setRight(BinaryTree* newRight) { rightField = newRight; }
        
        // CONST MEMBER FUNCTIONS
        const valueTypeName& getData() const { return dataField; }
        const valueTypeWeight& getWeight() const { return weightField; }
        const BinaryTree* getLeft() const { return leftField; }
        const BinaryTree* getRight() const { return rightField; }
        bool isLeaf() const
        { return (leftField == NULL) && (rightField == NULL); }
    private:
        valueTypeName dataField;
        valueTypeWeight weightField;
        BinaryTree *leftField;
        BinaryTree *rightField;
      //  map<string, double> data;
        
    };
    
    // NON-MEMBER FUNCTIONS for the BinaryTree:
    void inorder(BinaryTree* nodePtr);
    void preorder(BinaryTree* nodePtr);
    void postorder(BinaryTree* nodePtr);
   // void nameSearch(BinaryTree* nodePtr, string name);
    int countLeaves(BinaryTree* nodePtr);
    void print(BinaryTree* nodePtr);
    void treeClear(BinaryTree*& rootPtr);
    void findWeight(BinaryTree* nodePtr);
    size_t treeSize(const BinaryTree* nodePtr);
    size_t treeHeight(const BinaryTree* nodePtr);
    void printTree(BinaryTree* nodePtr, int depth);
}


#endif /* BinaryTree_h */
