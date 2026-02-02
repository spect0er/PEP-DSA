/*  L. Summation
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Print the summation of the array elements.

Note: Solve this problem using recursion.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print the summation of the N numbers.

Examples
Input
4
1 4 2 7
Output
14
Input
4
5 5 5 5
Output
20
*/
#include<bits/stdc++.h>
using namespace std;

long long sumOfArray(int arr[], int end){
    if(end == 0) return arr[end];
    return arr[end] + sumOfArray(arr,end - 1);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    cout << sumOfArray(arr,n - 1);
    return 0;
}