//
// Created by Abhishek Singh on 04-10-2017.
//
//Write a program to find Union and Intersection of two sorted arrays
#include <stdio.h>

void unionArray(int *arr1, int *arr2, int size1, int size2){
    int i=0,j=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            printf("%d ",arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j]){
            printf("%d ",arr2[j]);
            j++;
        }
        else {
            printf("%d ",arr2[j]);
            i++;
            j++;
        }
    }
    while(i<size1){
        printf("%d ",arr1[i++]);
    }
    while(j<size2){
        printf("%d ",arr2[j++]);
    }
}
void intersectionArray(int *arr1, int *arr2, int size1, int size2){
    int i=0,j=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else {
            printf("%d ",arr2[j]);
            i++;
            j++;
        }
    }
}
int main(){
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};
    unionArray(arr1,arr2,5,4);
    printf("\n");
    intersectionArray(arr1,arr2,5,4);
    return 0;
}

