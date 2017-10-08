//
// Created by Abhishek on 04-Oct-17.
//
//Find a Fixed Point (Value equal to index) in a given array
//Given an array of n distinct integers sorted in ascending order, write a function that returns a Fixed Point in the array, if there is any Fixed Point present in array, else returns -1. Fixed Point in an array is an index i such that arr[i] is equal to i. Note that integers in array can be negative.

#include <stdio.h>
int findFixedPoint(int *arr,int low, int high){
    if(low<=high){
        int mid = (high+low)/2;
        if(mid == arr[mid]){
            return mid;
        }
        if(mid>arr[mid])
            return findFixedPoint(arr,mid+1,high);
        else
            return findFixedPoint(arr,low,mid-1);
    }
    return -1;
}

int main(){
    int arr[] = {-10, -1, 0, 3, 10, 11, 30, 50, 100};
    printf("%d",findFixedPoint(arr,0,8));
	return 0;
}