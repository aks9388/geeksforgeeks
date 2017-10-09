//
// Created by Abhishek Singh on 09-10-2017.
//
#include <malloc.h>
#include <cstdio>
#include "treeUtil.h"

void addNode(Tree **root,int data){
    Tree *newNode = (Tree *)malloc(sizeof(Tree));
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    *root = newNode;
}
void inOrderTraversal(Tree *root){
    if(!root){
        return;
    }
    inOrderTraversal(root->left);
    printf("%d ", root->data);
    inOrderTraversal(root->right);
}
void preOrderTraversal(Tree *root){
    if(!root){
        return;
    }

    printf("%d ", root->data);
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(Tree *root){
    if(!root){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    printf("%d ", root->data);

}
