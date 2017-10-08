//
// Created by Abhishek Singh on 03-10-2017.
//
//Write a program to Find the largest three elements in an array
#include <stdio.h>
#include <conio.h>
#include <limits.h>
void largestThree(int *arr,int len){
    if(len <3){
        printf("Array contain less than 3 elements");
        return;
    }
    int first,second,third;
    first=second=third=INT_MIN;
    for(int i=0;i<len;i++){
        if(arr[i]>first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second){
            third = second;
            second = arr[i];
        }
        else if(arr[i]>third){
            third = arr[i];
        }
    }
    printf("%d, %d, %d",first,second,third);

}
int main(){
    int arr[] = {1, 5, 3, 19, 18, 25};
    largestThree(arr,6);
}

