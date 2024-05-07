#ifndef FAMILYTREE_H
#define FAMILYTREE_H

#include "FamilyMember.h"
#include <iostream>

template <typename NODETYPE>
class FamilyTree{
public:

    FamilyTree(FamilyMember<NODETYPE> * rootPtr): root{rootPtr}{}

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

    void rTraverse(FamilyMember<NODETYPE> * rootPtr, int indents = 0){
        std::cout <<  rootPtr->getMember().toString(indents); // 1

        if (!(rootPtr->getChildren().empty())){ 
            std::string ind = "";
            for (int i = 0; i < indents; i++){ // # of recursive calls, still 1
                ind += "--";
            }
            std::cout << ind + "Children of " + rootPtr->getMember().getFirstName() + " " +  rootPtr->getMember().getLastName() + ":\n"; 
            indents++;      //increment # of recursive calls since we have at least one child in the vector
            for (size_t i = 0; i < rootPtr->getChildren().size(); i++){ // n -> # of children 
                rTraverse(rootPtr->getChildren()[i], indents); // 1 
            }
        }
    }

    // T(n) =  O(n) 



    void rSearch(FamilyMember<NODETYPE> * rootPtr, std::string name, int indents = 0){

        // if the current root matches the given name, we display their toString and loop through rtraverse to get their children info
        if (rootPtr->getMember().getFirstName() == name){
            std::cout <<"Found: " <<  rootPtr->getMember().toString() << std::endl;

            if (!(rootPtr->getChildren().empty())){
                std::string ind = "";
                for (int i = 0; i < indents; i++){
                    ind += "--";
                }
                std::cout << ind + "Children of " + rootPtr->getMember().getFirstName() + " " +  rootPtr->getMember().getLastName() + ":\n"; 
                indents++;
                for (size_t i = 0; i < rootPtr->getChildren().size(); i++){ // n children
                    rTraverse(rootPtr->getChildren()[i], indents);
                }
            }
            
        }

        // if the root has children, we search through their children and check the first names
        if (!(rootPtr->getChildren().empty())){
            for (size_t i = 0; i < rootPtr->getChildren().size(); i++){ // loop through n children
                rSearch(rootPtr->getChildren()[i], name, indents); // each checks for each child and their children's children for matching first name
            }
        }


    }

    // T(n) = O(n)

};

#endif