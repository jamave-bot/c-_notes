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
    void rTraverse(FamilyMember<NODETYPE> * rootPtr, int indents = 0){
        std::cout <<  rootPtr->getMember().toString(indents);

        if (!(rootPtr->getChildren().empty())){
            std::string ind = "";
            for (int i = 0; i < indents; i++){
                ind += "--";
            }
            std::cout << ind + "Children of " + rootPtr->getMember().getFirstName() + " " +  rootPtr->getMember().getLastName() + ":\n"; 
            indents++;
            for (size_t i = 0; i < rootPtr->getChildren().size(); i++){
                rTraverse(rootPtr->getChildren()[i], indents);
                // std::cout << rootPtr->getChildren()[i]->getMember().toString();
            }
        }
        // std::cout << rootPtr->getChildren()[0]->getMember().toString();
    }

    void rSearch(FamilyMember<NODETYPE> * rootPtr, std::string name){

    }

};

#endif