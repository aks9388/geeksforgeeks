//
// Created by KH2174 on 10-10-2017.
//
//Write an Efficient Function to Convert a Binary Tree into its Mirror Tree
#include "treeUtil.h"

Tree * mirrorTree(Tree *root){
    if(!root){
        return root;
    }
    mirrorTree(root->left);
    mirrorTree(root->right);
    Tree *temp = root->left;
    root->left = root->right;
    root->right = temp;
    return root;
}
int main(){
    Tree *root = nullptr;
    addNode(&root,1);
    addNode(&(root->left),2);
    addNode(&(root->right),3);
    addNode(&(root->left->left),4);
    addNode(&(root->left->right),5);
    inOrderTraversal(root);
    root = mirrorTree(root);
    inOrderTraversal(root);
}