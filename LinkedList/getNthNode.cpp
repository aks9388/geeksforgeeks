//
// Created by Abhishek Singh on 05-10-2017.
//
// Write a function to get Nth node in a Linked List
#include <iostream>
#include "LinkedListUtil.h"

int getNthNode(Node *head, int n){
    Node *iterator = head;
    int count =0;
    if(!head){
        return -1;
    }
    while(iterator){
        if(count==n){
            return iterator->data;
        }
        count++;
        iterator = iterator->next;
    }
    if(count<n){
        return -1;
    }
}
int main(){
    Node *head = nullptr;
    addNodeAtTheEnd(&head,1);
    addNodeAtTheEnd(&head,12);
    addNodeAtTheEnd(&head,1);
    addNodeAtTheEnd(&head,4);
    addNodeAtTheEnd(&head,1);
    printf("%d ",getNthNode(head,8));
    return 0;
}
