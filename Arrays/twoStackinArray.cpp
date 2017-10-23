//
// Created by Abhishek on 10-Oct-17.
//
//Implement two stacks in an array

#include <malloc.h>
#include <cstdio>


class twoStacks{
public:
    int *arr,top1,top2,size;
    twoStacks(int size){
        size = size;
        arr = (int *)malloc(size*sizeof(int));
        top1 = -1;
        top2 = size;
    }

public:
    void push1(int data){
        if(top1<top2-1){
            arr[++top1]=data;
        }
        else{
            printf("Stack1 Overflow");
        }
    }

public:
    void push2(int data){
        if(top1<top2-1){
            arr[--top2]=data;
        }
        else{
            printf("Stack2 Overflow");
        }
    }

public:
    int pop1(){
        if(top1==-1){
            printf("Stack1 Empty");
            return -1;
        }
        return arr[top1--];
    }

public:
    int pop2(){
        if(top2==size){
            printf("Stack2 Empty");
            return -1;
        }
        return arr[top2++];
    }
};
int main(){
    twoStacks ts(4);
    ts.push1(1);
    ts.push2(2);
    ts.push1(3);
    ts.push1(4);
    ts.push2(5);
    printf("%d ", ts.pop1());
    printf("%d ", ts.pop1());
    printf("%d ", ts.pop1());
    printf("%d ", ts.pop1());
    printf("\n%d ", ts.pop2());
    printf("%d ", ts.pop2());
    printf("%d ", ts.pop2());
}