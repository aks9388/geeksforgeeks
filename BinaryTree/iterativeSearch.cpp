//
// Created by Abhishek on 12-10-2017.
//
//Iterative Search for a key ‘x’ in Binary Tree

#include "treeUtil.h"
#include <queue>
#include <stack>
#include <cstdio>

using namespace std;

bool iterativeSearchLevelOrder(Tree *root, int element){
    if(!root)
        return 0;
    queue<Tree *> q;
    q.push(root);
    while(!q.empty()){
        Tree *temp = q.front();
        q.pop();
        int data = temp->data;
        if(data==element){
            return 1;
        }
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
    return 0;
}
bool iterativeSearchDFS(Tree *root, int element){
    if(!root)
        return 0;
    stack<Tree *> s;
    s.push(root);
    while(!s.empty()){
        Tree *temp = s.top();
        s.pop();
        int data = temp->data;
        if(data==element){
            return 1;
        }
        if(temp->right)
            s.push(temp->right);
        if(temp->left)
            s.push(temp->left);
    }
    return 0;
}
int main(){
    Tree *root= nullptr;
    addNode(&root,1);
    addNode(&(root->left),2);
    addNode(&(root->right),3);
    addNode(&(root->left->left),4);
    addNode(&(root->left->right),5);
    if(iterativeSearchDFS(root,5))
        printf("Found");
    else
        printf("Not Found");
    return 0;
}
