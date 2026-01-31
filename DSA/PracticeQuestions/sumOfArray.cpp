// find sum of array using recursion.
#include<bits/stdc++.h>
using namespace std;
int sumOfArray(int arr[], int size){
    if(size == 1) return arr[0];
    return arr[0] + sumOfArray(arr + 1, size - 1);
}

int main(){

    int arr[] = {1,2,3,4,5};
    cout << "Sum: " << sumOfArray(arr,5);
    return 0;
}