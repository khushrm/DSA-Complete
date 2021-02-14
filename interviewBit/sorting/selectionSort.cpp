#include<bits/stdc++.h>
using namespace std;

int find_min_index(int *arr,int low,int len){
    int min_index = low;
    for(int i=low;i<len;i++){
        if(arr[min_index] > arr[i]){
            min_index = i;
        }
    }
    return min_index;
}

void selectionSort(int *arr,int len){
    for(int i=0;i<len;i++){
        int min_index = find_min_index(arr,i,len);
        if(i != min_index){
            swap(arr[i], arr[min_index]);
        }
    }
}

void printArr(int *arr,int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6] = {5, 1, 6, 2, 4, 3};
    selectionSort(arr,6);
    printArr(arr,6);
    return 0;
}