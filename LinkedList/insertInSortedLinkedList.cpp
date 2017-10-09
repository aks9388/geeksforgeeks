//
// Created by Abhishek on 09-Oct-17.
//
//Given a linked list which is sorted, how will you insert in sorted way


#include <malloc.h>
#include <cstdio>
#include "LinkedListUtil.h"

void insertInSortedLinkedList(Node **head,int data){
    Node *curr ;
    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = nullptr;

    if(!(*head) || (*head)->data>=data){
        newNode->next = *head;
        *head = newNode;
    }
    else{
        curr = *head;
        while(curr->next!=NULL && curr->next->data<data){
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
    }
}
int main(){
    Node* head = NULL;
    insertInSortedLinkedList(&head, 5);
    insertInSortedLinkedList(&head, 10);
    insertInSortedLinkedList(&head, 7);
    insertInSortedLinkedList(&head, 3);
    insertInSortedLinkedList(&head, 1);
    insertInSortedLinkedList(&head, 9);

    printf("\n Created Linked List\n");
    printLinkedList(head);
}

