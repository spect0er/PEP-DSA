#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int start, int end){
    for(int i = start ; i <= end ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void merge(int arr[], int start, int end){

}
void mergeSort(int arr[], int start, int end){
    if(start >= end) return;
    int mid = (start + end) / 2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid + 1,end);
    merge(arr,start,end);
    print(arr,start,end);
}

int main(){
    int arr[] = {2,5,1,6,7,3,10};
    mergeSort(arr,0,6);
    // print(arr,6);
    return 0;
}