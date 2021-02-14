#include<bits/stdc++.h>
using namespace std;
//insertion sort best n and worst and avg n**2
void insertionsort(int *arr,int len){
    int i,j,key;
    for(i=1;i<len;i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void printArr(int *arr,int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6] = {5, 1, 6, 2, 4, 3};
    insertionsort(arr,6);
    printArr(arr,6);
    return 0;
}