//
// Created by KH2174 on 05-10-2017.
//
//Search an element in a Linked List (Iterative and Recursive)
//Write a C function that searches a given key ‘x’ in a given singly linked list. The function should return true if x is present in linked list and false otherwise.

#include <cstdio>
#include "LinkedListUtil.h"

bool searchElement_iterative(Node *head,int data){
    if(head==NULL){
        return false;
    }
    Node *iterator = head;
    while(iterator){
        if(iterator->data == data){
            return true;
        }
        iterator = iterator->next;
    }
    return false;
}

bool searchElement_recursive(Node *head,int data){
    if(head==NULL){
        return false;
    }
    return head->data==data || searchElement_recursive(head->next,data);
}
int main(){
    Node *head = nullptr;
    addNodeAtTheBeginning(&head, 10);
    addNodeAtTheBeginning(&head, 30);
    addNodeAtTheBeginning(&head, 11);
    addNodeAtTheBeginning(&head, 21);
    addNodeAtTheBeginning(&head, 14);
    printf("%d ",searchElement_recursive(head,11));
    printf("%d ",searchElement_iterative(head,21));
    return 0;
}
