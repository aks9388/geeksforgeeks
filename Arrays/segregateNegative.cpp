//
// Created by Abhishek on 04-Oct-17.
//
//Write a program to Move all negative elements to end in order with extra space allowed

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

void segregateNegative(int *arr,int len){
    int temp[len],j=0;
    for(int i=0;i<len;i++){
        if(arr[i]>=0){
            temp[j++] = arr[i];
        }
    }
    if(j==len || j==0)
        return;
    for(int i=0;i<len;i++){
        if(arr[i]<0){
            temp[j++] = arr[i];
        }
    }
    memcpy(arr, temp, sizeof(temp));

}

int main(){
    int arr[] = {1 ,-1 ,-3 , -2, 7, 5, 11, 6 };
    printf("%d",segregateNegative(arr,8));
    printArray(arr,8);
}