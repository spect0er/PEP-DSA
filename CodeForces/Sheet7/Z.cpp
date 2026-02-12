/*  Z. Left Max
time limit per test1 second
memory limit per test256 megabytes
Given a number N
 and an array A
 of N
 numbers, print the maximum in the range from 1
 to i
 for each i≤N
.

Note: Solve this problem using recursion.

Input
First line contains a number N
 (1≤N≤105)
 number of elements.

Second line contains N
 numbers (−109≤Ai≤109)
.

Output
Print N
 numbers, the maximum from index 1
 to index i
.
*/
#include<bits/stdc++.h>
using namespace std;

void leftMax(int arr[],int size,int max_till_now,int index){
    if(index >= size) return;
    max_till_now = max(arr[index],max_till_now);
    cout << max_till_now << " ";
    leftMax(arr,size,max_till_now,index + 1);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    leftMax(arr,n,INT_MIN,0);
    return 0;
}