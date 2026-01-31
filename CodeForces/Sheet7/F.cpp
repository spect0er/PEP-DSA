/* F. Print Even Indices
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Print the numbers in even indices in a reversed order.

Note:

Assume array A is 0-based indexing.
Solve this problem using recursion.
Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print numbers in even indices in a reversed order separated by spaces.

*/
#include<iostream>
using namespace std;

void printEvenIndices(int arr[], int n){
    if(n == -1) return;
    if(n % 2 == 0){
        cout << arr[n] << " ";
    }
    printEvenIndices(arr, n - 1);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    printEvenIndices(arr, n-1);
    return 0;
}