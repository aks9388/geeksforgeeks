//
// Created by Abhishek Singh on 09-10-2017.
//
// Write a program to Calculate Size of a tree

#include <cstdio>
#include "treeUtil.h"

int sizeOfTree(Tree *root){
    if(!root){
        return 0;
    }
    return (sizeOfTree(root->left)+1+sizeOfTree(root->right));
}
int main(){
    Tree *root = nullptr;
    addNode(&root,1);
    addNode(&(root->left),2);
    addNode(&(root->right),3);
    addNode(&(root->left->left),4);
    addNode(&(root->left->right),5);
    printf("size of tree:: %d", sizeOfTree(root));
    return 0;
}