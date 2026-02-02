/*  M. Suffix Sum
time limit per test1 second
memory limit per test256 megabytes
Given two numbers N
 and M
, and an array A
 of N
 numbers. Calculate the sum of the last M
 numbers.

Note: solve this problem using recursion.

Input
First line contains two numbers N
 and M
 (1≤M≤N≤105)
.

Second line contains N
 numbers (−109≤Ai≤109)
.

Output
Print the sum of the last M
 numbers of the given array.

Example
Input
5 3
1 8 2 10 3
Output
15


*/
#include<bits/stdc++.h>
using namespace std;

long long suffixSum(int arr[], int lastIndex, int m){
    if(m == 0) return 0;
    return arr[lastIndex] + suffixSum(arr,lastIndex - 1,m - 1);
}

int main(){
    int size,m;
    cin >> size >> m;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }
    cout << suffixSum(arr,size-1,m);
    return 0;
}