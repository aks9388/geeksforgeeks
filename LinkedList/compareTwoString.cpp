//
// Created by Abhishek on 09-Oct-17.
//
//Compare two strings represented as linked lists
//Given two linked lists, represented as linked lists (every character is a node in linked list).
// Write a function compare() that works similar to strcmp(), i.e., it returns 0 if both strings are same,
// 1 if first linked list is lexicographically greater, and -1 if second string is lexicographically greater.

#include <cstdio>
#include "LinkedListUtil.h"

int compareSting(Node *head1, Node *head2){
    while(head1 && head2 && head1->data ==head2->data){
            head1= head1->next;
            head2 = head2->next;
    }
    if(head1 && head2){
        return head1->data>head2->data?1:-1;
    }
    if(!head1 && head2){
        return 1;
    }
    if(head1 && !head2){
        return -1;
    }
    return 0;
}
int main(){
    Node *list1,*list2;
    list1 = list2 = nullptr;
    addNodeAtTheEnd(&list1,(int)'g');
    addNodeAtTheEnd(&list1,(int)'e');
    addNodeAtTheEnd(&list1,(int)'e');
    addNodeAtTheEnd(&list1,(int)'k');
    addNodeAtTheEnd(&list1,(int)'s');
    addNodeAtTheEnd(&list1,(int)'b');

    addNodeAtTheEnd(&list2,(int)'g');
    addNodeAtTheEnd(&list2,(int)'e');
    addNodeAtTheEnd(&list2,(int)'e');
    addNodeAtTheEnd(&list2,(int)'k');
    addNodeAtTheEnd(&list2,(int)'s');
    addNodeAtTheEnd(&list2,(int)'a');

    printf("%d",compareSting(list1,list2));

    return 0;
}

