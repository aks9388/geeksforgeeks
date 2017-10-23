//
// Created by Abhishek Singh on 12-10-2017.
//
//Convert a given Binary tree to a tree that holds Logical AND property
//Given a Binary Tree (Every node has at most 2 children) where each node has value either 0 or 1. Convert a given Binary tree to a tree that holds Logical AND property, i.e., each node value should be the logical AND between its children.
#include <cstdio>
#include <malloc.h>
#include "treeUtil.h"

void createLogicalBinaryTree(Tree *root){
    if(!root->left && !root->right){
        return;
    }
    createLogicalBinaryTree(root->left);
    createLogicalBinaryTree(root->right);
    root->data =  root->left->data & root->right->data;
}

int main(){
    Tree *root = nullptr;
    addNode(&root,0);
    addNode(&(root->left),1);
    addNode(&(root->right),1);
    addNode(&(root->left->left),0);
    addNode(&(root->left->right),1);
    addNode(&(root->right->left),0);
    addNode(&(root->right->right),1);
    inOrderTraversal(root);
    printf("\n");
    createLogicalBinaryTree(root);
    inOrderTraversal(root);
    return 0;
}