#include<bits/stdc++.h>
using namespace std;

int pick_both(vector<int> arr,int B){
    int sum = 0,size=arr.size(),max_sum=0;
    for(int i=0;i<B;i++){
        sum += arr[i];
    }
    max_sum = sum;
    for(int i=0;i<B;i++){
        sum -= arr[B - i - 1];
        sum += arr[size - i - 1];
        max_sum = max(sum,max_sum);
    }
    return max_sum;
}

int main(){
    vector<int> arr = {-533, -666, -500, 169, 724, 478, 358, -38, -536, 705, -855, 281, -173, 961, -509, -5, 942, -173, 436, -609, -396, 902, -847, -708, -618, 421, -284, 718, 895, 447, 726, -229, 538, 869, 912, 667, -701, 35, 894, -297, 811, 322, -667, 673, -336, 141, 711, -747, -132, 547, 644, -338, -243, -963, -141, -277, 741, 529, -222, -684, 35 };
    int B = 48;
    cout<<arr.size()<<endl;
    cout<<pick_both(arr,B);
}