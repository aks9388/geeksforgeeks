//
// Created by Abhishek Singh on 09-10-2017.
//
//Find the subarray with least average

#include <cstdio>

//Given an array arr[] of size n and integer k such that k <= n.
void leastSubarray(int *arr, int len, int k){
    int i=0, startIndex, endIndex,leastsum=0,currSum;
    startIndex = 0;
    for(int i=0;i<k;i++){
        leastsum = leastsum +arr[i];
    }
    currSum = leastsum;
    for(i=k;i<len;i++){
        currSum = (currSum- arr[i-k])+arr[i];
        if(currSum<leastsum){
            leastsum = currSum;
            startIndex = i-k+1;
        }

    }
    printf("Index is %d - %d", startIndex,startIndex+k-1);
}
int main(){
    int arr[] = {3, 7, 90, 20, 10, 50, 40};
    int k = 3; // Subarray size
    leastSubarray(arr,7,k);
    return 0;
}