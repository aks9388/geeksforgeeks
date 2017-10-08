//
// Created by Abhishek Singh on 04-10-2017.
//

#ifndef LL_LINKEDLISTUTIL_H
#define LL_LINKEDLISTUTIL_H
typedef struct LinkedListNode{
    int data;
    struct LinkedListNode *next;
}Node;

Node* createNode(int data);
void printLinkedList(Node *head);
void addNodeAtTheEnd(Node **head, int data);
void addNodeAtTheBeginning(Node **head,int data);
Node* reverseLinkedList_recursive(Node *head);
Node* reverseLinkedList_Iterative(Node *head);

#endif //LL_LINKEDLISTUTIL_H
