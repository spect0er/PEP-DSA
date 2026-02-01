/*  K. Max Number
time limit per test1 second
memory limit per test64 megabytes
Given a number N and an array A of N numbers. Print the maximum value in this array.

Note: Solve this problem using recursion.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print the maximum value in this array.

Example
Input
5
1 -3 5 4 -6
Output
5
*/
#include<bits/stdc++.h>
using namespace std;

int maxNum(int arr[], int size){
    if(size == 0) return arr[size];
    int prevMax = maxNum(arr,size - 1);
    return (arr[size] >= prevMax) ? arr[size] : prevMax;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    cout << maxNum(arr,n - 1);
    return 0;
}