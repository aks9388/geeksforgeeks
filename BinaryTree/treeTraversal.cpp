//
// Created by Abhishek Singh on 09-10-2017.
//
//Tree Traversals (Inorder, Preorder and Postorder)
#include <cstdio>
#include "treeUtil.h"
int main(){
    Tree *root;
    addNode(&root,1);
    addNode(&(root->left),2);
    addNode(&(root->right),3);
    addNode(&(root->left->left),4);
    addNode(&(root->left->right),5);
    printf("PreOrder Traversal:");
    preOrderTraversal(root);
    printf("\nPostOrder Traversal:");
    postOrderTraversal(root);
    printf("\nInOrder Traversal:");
    inOrderTraversal(root);
    return 0;
}
