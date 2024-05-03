#ifndef FAMILYMEMBER_H
#define FAMILYMEMBER_H

#include <vector>

template <typename NODETYPE> class FamilyTree;


template <typename NODETYPE>
class FamilyMember{
    friend class FamilyTree<NODETYPE>;
public:
    FamilyMember(NODETYPE person):famMember{person}{}

    NODETYPE getMember() const {return famMember;}
    std::vector<FamilyMember *> getChildren() const {return children;}

    void addChild(FamilyMember * newMember){
        children.push_back(newMember);
    }
private:
    NODETYPE famMember;
    std::vector<FamilyMember *> children;
};

#endif