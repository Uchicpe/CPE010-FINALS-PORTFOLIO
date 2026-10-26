#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>

template<typename T>
class BinaryTree {
    private:
        T key;

        // pointers for left and right child
        BinaryTree<T>* leftchild;
        BinaryTree<T>* rightchild;

    public:
        // constructor
        BinaryTree(T rootObj);
        // insert a child on the left and right node
        void insertChildLeft(T newNode);
        void insertChildRight(T newNode);

        BinaryTree<T>* getLeftChild();
        BinaryTree<T>* getRightChild();

        T getRootVal();
        void setRootVal(T newNode);
};

//constructor:
template <typename T>
BinaryTree<T>::BinaryTree(T rootObj){
        key = rootObj;
        leftchild = nullptr;
        rightchild = nullptr;
}

// insert child:
template <typename T>
void BinaryTree<T>::insertChildLeft(T newNode){
    if (leftchild == nullptr){
        leftchild = new BinaryTree<T>(newNode);
    } else {
        BinaryTree<T>* newNode = new BinaryTree<T>(newNode);
        // move the current left child below the new Node.
        newNode->leftchild = leftchild;
        leftchild = newNode;
    }
}

template<typename T>
void BinaryTree<T>::insertChildRight(T newNode){
    if (rightchild == nullptr) {
        rightchild = new BinaryTree<T>(newNode);
    } else {
        BinaryTree<T>* newNode = new BinaryTree<T>(newNode);
        newNode->rightchild = rightchild;
        rightchild = newNode;
    }
    rightchild = new BinaryTree<T>(newNode);
}

template<typename T>
BinaryTree<T> *BinaryTree<T>::getLeftChild() {
    return leftchild;
}

template<typename T>
BinaryTree<T> *BinaryTree<T>::getRightChild() {
    return rightchild;
}

template <typename T>
T BinaryTree<T>::getRootVal(){
    return key;
}

template<typename T>
void BinaryTree<T>::setRootVal(T newNode) {
    key = newNode;
}

#endif 