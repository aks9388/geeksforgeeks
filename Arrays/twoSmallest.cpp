//
// Created by Abhishek Singh on 03-10-2017.
//
//Write a program to Find the smallest and second smallest elements in an array
#include <stdio.h>
#include <conio.h>
void twoSmallest(int *arr,int len){
    if(len<2){
        printf("Invalid input");
        return;
    }
    int first,second;
    if(arr[0]>arr[1]){
        first = arr[1];
        second = arr[0];
    }
    else{
        first = arr[0];
        second = arr[1];
    }
    for(int i=2;i<len;i++){
        if(arr[i]<first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]<second && arr[i]!=first){
            second = arr[i];
        }
    }
    printf("%d %d",first,second);
}

int main(){
    int arr[] = {12, 13, 1, 10, 34, 1};
    twoSmallest(arr,6);
}

