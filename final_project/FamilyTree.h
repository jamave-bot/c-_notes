#ifndef FAMILYTREE_H
#define FAMILYTREE_H

#include "FamilyMember.h"
#include <iostream>

template <typename NODETYPE>
class FamilyTree{
public:

    FamilyTree(FamilyMember<NODETYPE> * rootPtr): root{rootPtr}{}
    // ~FamilyTree(){
    //     rDeleteTree(root); // 
    // }


    // prints out all of the family tree with children
    void preOrderTraversal(){
        rTraverse(root);
        std::cout << std::endl;
    }

    // look for family member based on first name, print out search results
    void searchMember(std::string name){
        rSearch(root, name);
    }

private:
    // one data type which is the head of the current family branch
    FamilyMember<NODETYPE> * root{nullptr};

    FamilyMember<NODETYPE> * getNewMember(NODETYPE member){
        return new FamilyMember<NODETYPE>{member};
    }

    // void rDeleteTree(FamilyMember<NODETYPE>* rootPtr){ // rootPtr is a pointer to the root 
    //     if (rootPtr == nullptr){
    //         return;
    //     }
    //     if (!(rootPtr->children.empty())){ // if the head of current branch has children,
    //         for ( NODETYPE* famMember: rootPtr->children){
    //             rDeleteTree(famMember);
    //         }
    //         delete rootPtr;
    //     } else{
    //         delete rootPtr;
    //     }
    // }


    // TODO: recursive search and traversal functions 
    void rTraverse(FamilyMember<NODETYPE> * rootPtr){

    }



};

#endif