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
    void addChild();
private:
    NODETYPE famMember;
    std::vector<FamilyMember *> children;

};

#endif