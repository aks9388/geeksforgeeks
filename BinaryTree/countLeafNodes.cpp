//
// Created by Abhishek Singh on 09-10-2017.
//
//Program to count leaf nodes in a binary tree

#include <cstdio>
#include "treeUtil.h"

int getLeafCount(Tree *root){
    if(!root){
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
        return 1;
    return getLeafCount(root->left)+getLeafCount(root->right);
}
int main(){
    Tree *root = nullptr;
    addNode(&root,1);
    addNode(&(root->left),2);
    addNode(&(root->right),3);
    addNode(&(root->left->left),4);
    addNode(&(root->left->right),5);
    printf("Leaf count of the tree is %d", getLeafCount(root));
    return 0;
}
