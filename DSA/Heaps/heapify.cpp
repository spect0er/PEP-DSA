#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int i){
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;
    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void buildMaxHeap(vector<int>& arr, int n){
    for(int i = n/2; i >= 0 ; i--){
        heapify(arr,n,i);
    }
}

int main(){

    
    return 0;
}