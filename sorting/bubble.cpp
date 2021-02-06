#include<bits/stdc++.h>
using namespace std;


void bubbleSort(int *arr,int len){
    for(int i=0;i<len-1;i++){
        bool swapped = false;
        for(int j=0;j<len-i-1;++j){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

void printArr(int *arr,int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6] = {5, 4,6,2,1,3};
    bubbleSort(arr,6);
    printArr(arr,6);
    return 0;
}