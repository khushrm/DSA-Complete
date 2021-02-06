#include<bits/stdc++.h>
using namespace std;

int partition(int *arr,int low, int high){
    int pivot = high,idx=low;
    for(int i=low;i< high;i++){
        if(arr[pivot] > arr[i]){
            swap(arr[i], arr[idx]);
            idx++;
        }
    }
    swap(arr[idx], arr[high]);

    return idx;

}

void quickSort(int *arr,int low,int high){
    if(low < high){
        int p = partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}

void printArr(int *arr,int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6] = {5, 1, 6, 2, 4, 3};
    quickSort(arr,0,5);
    printArr(arr,6);
}