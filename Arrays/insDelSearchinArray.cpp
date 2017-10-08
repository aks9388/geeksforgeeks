//
// Created by Abhishek Singh on 03-10-2017.
//
//Write a program to Search, insert and delete in an unsorted array
#include <stdio.h>
#include <conio.h>
int searchElement(int *arr,int len, int element){
    for(int i=0;i<len;i++){
       if(arr[i]==element){
           return i;
       }
    }
    return -1;
}
int insertUnsorted(int *arr, int current, int element, int capacity){
    if(current>=capacity)
        return current;
    arr[current] = element;
    return current+1;
}
//assumption no duplicate in array
int deleteElement(int *arr, int len,int element){
    int pos = searchElement(arr,len,element);
    if(pos==-1){
        printf("Element not found");
        return -1;
    }
    for(int i=pos;i<len-1;i++){
        arr[i] = arr[i+1];
    }
    return len-1;
}
int main(){
//    int arr[] = {12, 34, 10, 6, 40};
//    int n = sizeof(arr)/sizeof(arr[0]);
//
//    //Using a last element as search element
//    int key =40;
//    int position = searchElement(arr,n,key);
//
//    if (position==-1)
//        printf("Element not found");
//    else
//        printf("Element Found at Position: %d", position+1 );
//
//    return 0;

//    int arr[20] = {12, 16, 20, 40, 50, 70};
//    int capacity = sizeof(arr)/sizeof(arr[0]);
//    int n = 6;
//    int i, key = 26;
//
//    printf("\nBefore Insertion: ");
//    for (i=0; i<n; i++)
//        printf("%d  ", arr[i]);
//
//    // Inserting key
//    n = insertUnsorted(arr, n, key, capacity);
//
//    printf("\nAfter Insertion: ");
//    for (i=0; i<n; i++)
//        printf("%d  ",arr[i]);
//
//    return 0;


    int i;
    int arr[] = {10, 50, 30, 40, 20};

    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 30;

    printf("Array before deletion\n");
    for (i=0; i<n; i++)
        printf("%d  ", arr[i]);

    n = deleteElement(arr, n, key);

    printf("\n\nArray after deletion\n");
    for (i=0; i<n; i++)
        printf("%d  ", arr[i]);

    return 0;
}

