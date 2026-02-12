/*  S. Array Average
time limit per test1 second
memory limit per test256 megabytes
Given a number N
 and an array A
 of N
 numbers. Calculate the average of these numbers.

Note: solve this problem using recursion.

Input
First line contains a number N
 (1≤N≤100)
 number of elements.

Second line contains N
 numbers (−109≤Ai≤109)
.

Output
Print the calculated average, with 6 digits after the decimal point.
*/
#include<bits/stdc++.h>
using namespace std;

double arrayAvg(int arr[],int size, int lastIndex){
    if(lastIndex < 0) return 0.0;
    return (double)arr[lastIndex]/size + arrayAvg(arr,size,lastIndex-1);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << fixed << setprecision(6) << arrayAvg(arr,n,n-1);

    return 0;
}