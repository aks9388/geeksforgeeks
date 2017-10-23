//
// Created by Abhishek on 15-Oct-17.
//
//Print all nodes that don’t have sibling

#include <cstdio>
#include "treeUtil.h"

void printSingleNodes(Tree *root) {
    if (!root) {
        return;
    }
    if (root->left != NULL && root->right == NULL)
        printf("%d ", root->left->data);
    if (root->left == NULL && root->right != NULL)
        printf("%d ", root->right->data);
    printSingleNodes(root->left);
    printSingleNodes(root->right);
}

void printSingleNodes1(Tree *root) {
    if (!root) {
        return;
    }
    if (root->left != NULL && root->right != NULL){
        printSingleNodes1(root->left);
        printSingleNodes1(root->right);
    }
    if(root->left != NULL){
        printf("%d ", root->left->data);
        printSingleNodes1(root);
    }

    if (root->right != NULL){
        printf("%d ", root->right->data);
        printSingleNodes1(root);
    }


}

int main(){
    Tree *root = nullptr;
    addNode(&root,1);
    addNode(&(root->left),2);
    addNode(&(root->right),3);
    addNode(&(root->left->right),4);
    addNode(&(root->right->left),5);
    addNode(&(root->right->left->left),6);
    printSingleNodes(root);
    return 0;
}