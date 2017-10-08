//
// Created by Abhishek on 04-Oct-17.
//
//Find the largest pair sum in an unsorted array
#include <stdio.h>
int maxPairSum(int *arr, int len){
    int first,second;
    if(len<2)
        return -1;
    if(arr[0]>arr[1]){
        first = arr[0];
        second = arr[1];
    }
    else{
        first = arr[1];
        second = arr[0];
    }
    for(int i=2;i<len;i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second){
            second = arr[i];
        }
    }
    return first+ second;
}

int main(){
    int arr[] = {12, 34, 10, 6, 40};
    printf("%d",maxPairSum(arr,5));
	return 0;
}