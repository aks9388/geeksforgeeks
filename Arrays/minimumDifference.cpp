//
// Created by Abhishek Singh on 03-10-2017.
//
//Write a program to Find minimum difference between any two elements
#include <stdio.h>
#include <conio.h>
#include <algorithm>
using namespace std;

int comp(const void *a, const void *b ){
    int *x = (int *)a;
    int *y = (int *) b;
    return *x-*y;
}
int minimumDifference(int *arr,int len){
    qsort(arr,len,sizeof(int),comp);
    int diff = arr[1]-arr[0];
    for(int i=1;i<len-1;i++){
        if((arr[i+1]-arr[i])<diff){
            diff = (arr[i+1]-arr[i]);
        }
    }
    return diff;
}
int main(){
    int arr[] = {1, 5, 3, 19, 18, 25};
    printf("%d",minimumDifference(arr,6));
}

