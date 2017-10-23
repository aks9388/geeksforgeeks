//
// Created by Abhishek Singh on 09-10-2017.
//
//Print All Distinct Elements of a given integer array
#include<iostream>
#include<vector>

using namespace std;
bool containsElement(vector<int> &hash,int element){
    vector<int>:: iterator it;
    for(it = hash.begin();it!=hash.end();it++){
        if(*it == element){
            return true;
        }
    }
    hash.push_back(element);
    return false;
}
void printDistinct(int *arr, int len){

    vector<int> hash;

    for(int i=0;i<len;i++){
        if(!containsElement(hash,arr[i])){
            printf("%d ",arr[i]);
        }
    }
}

int main(){

    int arr[]= {5,6,8,7,2,6};
    printDistinct(arr,6);

    return 0;
}
