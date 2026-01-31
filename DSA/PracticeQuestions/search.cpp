// Search in an array using resursion(linear search using recursion)
#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int key, int size){
    if(size == 0) return false;
    if(arr[0] == key) return true;
    return linearSearch(arr + 1, key, size - 1);
}

int main(){

    int arr[] = {1,2,3,4,5};
    int key = 4;
    cout << linearSearch(arr,key,5);
    return 0;
}