//
// Created by Abhishek Singh on 12-10-2017.
//
//Find maximum (or minimum) in Binary Tree

#include <cstdio>
#include "treeUtil.h"

int findMax(Tree *root){
    if(!root)
        return 0;
    int max = root->data;
    int leftValue = findMax(root->left);
    int rightValue = findMax(root->right);
    if(leftValue>max)
        max = leftValue;
    if(rightValue>max)
        max=rightValue;
    return max;
}

int main(){

    Tree *root = nullptr;
    addNode(&root,10);
    addNode(&(root->left),8);
    addNode(&(root->right),2);
    addNode(&(root->left->left),3);
    addNode(&(root->left->right),15);
    addNode(&(root->right->right),2);
    printf("%d",findMax(root));
    return 0;
}
