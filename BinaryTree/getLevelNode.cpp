//
// Created by Abhishek Singh on 10-10-2017.
//
//Get Level of a node in a Binary Tree
//Given a Binary Tree and a key, write a function that returns level of the key.
#include <cstdio>
#include "treeUtil.h"
int getLevelNode(Tree *root, int element, int level){
    if(!root){
        return 0;
    }
    if(root->data == element){
        return level;
    }
    int level1 = getLevelNode(root->left,element,level+1);
    if(level1!=0){
        return level1;
    }
    level1 = getLevelNode(root->right,element,level+1);
    if(level1!=0){
        return level1;
    }
}
int main(){
    Tree *root = nullptr;
    addNode(&root,1);
    addNode(&(root->left),2);
    addNode(&(root->right),3);
    addNode(&(root->left->left),4);
    addNode(&(root->left->right),5);
    int x = getLevelNode(root,6,0);
    printf("%d ", x);
    return 0;
}