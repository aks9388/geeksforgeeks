//
// Created by Abhishek Singh on 12-10-2017.
//
//Write a program to Delete a Tree.

#include <cstdlib>
#include "treeUtil.h"

void deleteTree(Tree *root){
    if(!root)
        return;
    deleteTree(root->left);
    deleteTree(root->right);
    free(root);
}
int main(){
    Tree *root = nullptr;
    addNode(&root,1);
    addNode(&(root->left),2);
    addNode(&(root->right),3);
    addNode(&(root->left->left),4);
    addNode(&(root->left->right),5);
    preOrderTraversal(root);
    deleteTree(root);
    root = nullptr;
}
