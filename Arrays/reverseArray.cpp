//
// Created by Abhishek Singh on 03-10-2017.
//
//Write a program to reverse an array or string
#include <stdio.h>
#include <conio.h>
void reverseArray(int *arr,int len){
    int temp = 0;
    for(int i=0;i<len/2;i++){
        temp = arr[i];
        arr[i] = arr[len-1-i];
        arr[len-i-1] = temp;
    }
}
void nonRecReverseArray(int *arr,int start, int end){
    if(start>=end){
        return;
    }
    int temp = 0;
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    return nonRecReverseArray(arr,start+1,end-1);
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    nonRecReverseArray(arr,0,6);
    printArray(arr,7);
}

