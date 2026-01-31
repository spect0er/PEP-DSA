// first we take an pivot element, then we postion the pivot element to it's actaul place in the sorted array, by checking the 
// number of elements smaller than 8
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int start, int end){
    // counting how many elements are less than pivot
    int count {0};
    for(int i = start + 1 ; i <= end ; i++){
        if(arr[i] <= arr[start]) count++;
    }
    // after counting, we got to know about the right place of pivot, now we will create a pivot index at that position.
    int pivotIndex = start + count;
    swap(arr[pivotIndex],arr[start]);

    // now we will handle the right and the left part in which all the elements should be less and greater respectively.

    int i = start, j = end;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < arr[pivotIndex]) i++;
        while(arr[j] > arr[pivotIndex]) j--;
        swap(arr[i++], arr[j--]);
    }
    return pivotIndex;
}
void quickSort(int arr[], int start, int end){
    if(start >= end) return;
    int p = partition(arr,start,end);
    quickSort(arr, start, p-1);
    quickSort(arr,p+1,end);
}
int main(){
    int arr[] = {7, 7, 5, 8, 2, 1, 5};
    quickSort(arr,0,6);
    for(int i: arr){
        cout << i << " ";
    }
    return 0;
}