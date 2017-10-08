//
// Created by KH2174 on 05-10-2017.
//
#include <iostream>
#include "LinkedListUtil.h"
void printLinkedList(Node *head){
    Node *iterator = head;
    if(!head){
        printf("Empty Linked List");
    }
    while(iterator){
        printf("%d ", iterator->data);
        iterator=iterator->next;
    }
    printf("\n");
    return;
}
void addNodeAtTheEnd(Node **head, int data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = nullptr;
    if(!(*head)){
        *head = newNode;
        return;
    }
    Node *iterator = *head;
    while(iterator->next){
        iterator = iterator->next;
    }
    iterator->next = newNode;
}

Node *reverseLinkedList_recursive(Node *head){
    if(!head || !head->next){
        return head;
    }

    Node *temp = head->next;

    head->next = nullptr;

    Node *newHead = reverseLinkedList_recursive(temp);
    temp->next = head;

    return newHead;
}

Node *reverseLinkedList_Iterative(Node *head){

    if(!head || !head->next){
        return  head;
    }

    Node *prev = nullptr,*curr =  head,*n = head->next;

    while(n){
        curr->next = prev;
        prev = curr;
        curr = n;
        n = curr->next;
    }
    curr->next = prev;
    return curr;
}
void addNodeAtTheBeginning(Node **head,int data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}


