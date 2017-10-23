//
// Created by Abhishek Singh on 12-10-2017.
//
//Check for Children Sum Property in a Binary Tree
//Given a binary tree, write a function that returns true if the tree satisfies below property.

#include <cstdio>
#include "treeUtil.h"

bool checkChildrenSum(Tree *root){
    if(!root || !root->left && !root->right)
        return 1;
    int leftValue = 0, rightValue=0;
    if(root->left)
        leftValue = root->left->data;
    if(root->right)
        rightValue = root->right->data;
    if((root->data ==leftValue+rightValue) && checkChildrenSum(root->left) && checkChildrenSum(root->right))
        return 1;
    else
        return 0;
}
int main(){

    Tree *root = nullptr;
    addNode(&root,10);
    addNode(&(root->left),8);
    addNode(&(root->right),2);
    addNode(&(root->left->left),3);
    addNode(&(root->left->right),5);
    addNode(&(root->right->right),2);
    if(checkChildrenSum(root))
        printf("The given tree satisfies the children sum property ");
    else
        printf("The given tree does not satisfy the children sum property ");
    return 0;
}
