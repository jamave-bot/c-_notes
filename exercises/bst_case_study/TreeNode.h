#ifndef TREENODE_H
#define TREENODE_H

template <typename NODETYPE> class BinarySearchTree;

template <typename NODETYPE>
class TreeNode{
    friend class BinarySearchTree<NODETYPE>;
public:
    TreeNode(NODETYPE value):data{value}, leftChild{nullptr}, rightChild{nullptr}
    {
        // empty
    }

    NODETYPE getData() const {return data;}


private: // data types (data/pointers)
    NODETYPE data;
    TreeNode<NODETYPE> * leftChild{nullptr};
    TreeNode<NODETYPE> * rightChild{nullptr};
};


#endif