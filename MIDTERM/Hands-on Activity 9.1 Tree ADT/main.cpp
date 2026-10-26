#include <iostream>
#include "binaryTree.h"

int main(){

    BinaryTree<char>* root = new BinaryTree<char>('A');
    root->insertChildLeft('B');
    root->insertChildRight('C');

    root->getLeftChild()->insertChildLeft('D');
    root->getLeftChild()->insertChildRight('E');
    root->getRightChild()->insertChildRight('F');

    std::cout << "The Root: " << root->getRootVal() << std::endl;
    std::cout << "The left child of node A is: " << root->getLeftChild()->getRootVal() << std::endl;
    std::cout << "The left child of node B is: " << root->getLeftChild()->getLeftChild()->getRootVal() << std::endl;
    std::cout << "The right child of node B is: " << root->getLeftChild()->getRightChild()->getRootVal() << std::endl;
    std::cout << "The right child of node A is: " << root->getRightChild()->getRootVal() << std::endl;
    std::cout << "The right child of node C is: " << root->getRightChild()->getRightChild()->getRootVal() << std::endl;

    root->getRightChild()->setRootVal('V');
    std::cout << "The NEW right child of root A is: " << root->getRightChild()->getRootVal() << std::endl;

    // Test Insertion Function "insertChildRight" and "insertChildLeft" ()
    // root->insertChildLeft('W');
    // std::cout << "The NEW right child of root A is: " << root->getLeftChild()->getRootVal() << std::endl;

    return 0;
}
