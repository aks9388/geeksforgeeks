//
// Created by Abhishek Singh on 09-10-2017.
//
//Write a Program to Find the Maximum Depth or Height of a Tree

#include <cstdio>
#include "treeUtil.h"

int maxHeight(Tree *root){
    if(!root)
        return 0;
    int leftSubTreeSize = maxHeight(root->left);
    int rightSubTreeSize = maxHeight(root->right);
    if(leftSubTreeSize>rightSubTreeSize)
        return leftSubTreeSize+1;
    else
        return rightSubTreeSize+1;
}

int main(){
    Tree *root = nullptr;
    addNode(&root,1);
    addNode(&(root->left),2);
    addNode(&(root->right),3);
    addNode(&(root->left->left),4);
    addNode(&(root->left->right),5);
    printf("Height of tree is %d", maxHeight(root));
    return 0;
}