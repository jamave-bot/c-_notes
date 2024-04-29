#ifndef BST_H
#define BST_H


#include "TreeNode.h"
#include <iostream>

template <typename NODETYPE>
class BinarySearchTree{
public:
    ~BinarySearchTree(){
        rDeleteTree(root); // we do this to not expose root to the outside, since it's a private data type
    }

    void insertNode(NODETYPE value){
        rInsertNode(&root, value); // NOTICE $root is the address of the address, a double pointer
    }

    void inOrderTraversal(){
        rTraverse(root);
        std::cout << std::endl;
    }

    TreeNode<NODETYPE> * searchKey(NODETYPE key){
        return rSearchKey(root, key);
    }

    void removeNode(NODETYPE key){
        root = rRemoveNode(root, key);
    }

private:
    TreeNode<NODETYPE> * root{nullptr};

    TreeNode<NODETYPE> * getNewNode(NODETYPE value){
        return new TreeNode<NODETYPE>{value};
    }

    // prefixed with r to indicate recursion
    void rDeleteTree(TreeNode<NODETYPE>* nodePtr){ // nodePtr is a pointer to the root 
        if (nodePtr == nullptr){
            return;
        } else {
            rDeleteTree(nodePtr->leftChild);     // recursive call with leftChild
            rDeleteTree(nodePtr->rightChild);    // recursive call with rightChild
            std::cout << "Deleting " << nodePtr->data << std::endl;
            delete nodePtr;
        }
    }

    // we use a double pointer
    // recursive again
    void rInsertNode(TreeNode<NODETYPE> ** nodePtr, NODETYPE value){
        if (*nodePtr == nullptr){ // dereference the pointer, which gives us an address value
            *nodePtr = getNewNode(value);
            return;
        }

        // the paranthese around *nodePtr are important, without them, you get the address of nodePtr->data
        if (value < (*nodePtr)->data){ // if the value is less than the root value
            rInsertNode(&((*nodePtr)->leftChild), value); // recursive call calling the address of the leftChild node
        } else if (value > (*nodePtr)->data){
            rInsertNode(&((*nodePtr)->rightChild), value);
        }else{  // else the value is the same
            return;
        }
    }

    void rTraverse(TreeNode<NODETYPE>* nodePtr){
        if (nodePtr == nullptr){
            return;
        }
        // in order traversal, so we must travel to the left first
        rTraverse(nodePtr->leftChild);      // first we print the left child, 
        std::cout << nodePtr->data << " ";  // then we print the nodePtr
        rTraverse(nodePtr->rightChild);     // then we print the right child and its elements
    }

    TreeNode<NODETYPE> * rSearchKey(TreeNode<NODETYPE> * nodePtr, NODETYPE key){
        // this is the base case in the case we don't find it
        if (nodePtr == nullptr){
            return nullptr;
        }

        // if the current node's data is equal to the key, we return current node address
        if (nodePtr->data == key){
            return nodePtr;
        } else if (key < nodePtr->data){    // if key is less than current value, we check the left side
            return rSearchKey(nodePtr->leftChild, key); 
        } else {                            // otherwise we chack the right side
            return rSearchKey(nodePtr->rightChild, key);
        }
    }

    TreeNode<NODETYPE>* rRemoveNode(TreeNode<NODETYPE>* nodePtr, NODETYPE key){
        if (nodePtr == nullptr) return nodePtr;

        if (key < nodePtr->data){
            nodePtr->leftChild = rRemoveNode(nodePtr->leftChild, key);
            return nodePtr;
        }

        if(key > nodePtr->data){
            nodePtr->rightChild = rRemoveNode(nodePtr->rightChild, key); // sets the new right to what we return
            return nodePtr;
        }

        // conditions for if the node only has 1 child
        if (nodePtr->rightChild == nullptr){
            TreeNode<NODETYPE> * newRootPtr = nodePtr->leftChild; // makes copy of the other child
            delete nodePtr;
            return newRootPtr;
        } else if (nodePtr->leftChild == nullptr){
            TreeNode<NODETYPE> * newRootPtr = nodePtr-> rightChild;
            delete nodePtr;
            return newRootPtr;
        }

        // conditions for if it has 2 children

        TreeNode<NODETYPE> * succParent = nodePtr; // successor parent
        TreeNode<NODETYPE> * succ = nodePtr->rightChild; // successor

        while (succ->leftChild != nullptr){
            succParent = succ;
            succ = succ->leftChild;
        }

        if (succParent != nodePtr){
            succParent->leftChild = succ->rightChild;
        } else{
            succParent->rightChild = succ->rightChild;
        }

        nodePtr->data = succ->data; // we only replace the node's data
        delete succ;
        return nodePtr; // same ptr just with correct value
    }
};

#endif