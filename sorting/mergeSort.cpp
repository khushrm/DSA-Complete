#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int low, int mid, int high){
    int n1=mid-low+1,n2=high-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++){
        left[i] = arr[i + low];
    }
    for(int j=0;j<n2;j++){
        right[j] = arr[mid + j + 1];
    }
    int i=0,j=0,k=low;
    while(i < n1 && j < n2){
        if(left[i] < right[j]){
            arr[k] = left[i];
            i++;
        } else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k++] = left[i++];
    }
    while(j < n2){
        arr[k++] = right[j++];
    }

}

void mergeSort(int *arr,int low,int high){
    if(low < high){
        int mid = (low + high) / 2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

void printArr(int *arr,int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6] = {5, 1, 6, 2, 3, 4};
    mergeSort(arr,0,5);
    printArr(arr,6);
}