/*  R. Palindrome Array
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Determine if it's palindrome or not.

Note:

An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

NOTE: Solve it using recursion.

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (1 ≤ Ai ≤ 109).

Output
Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).

Examples
Input
5
1 3 2 3 1
Output
YES
Input
4
1 2 3 4
Output
NO
*/
#include<bits/stdc++.h>
using namespace std;

void isPalindrome(int arr[], int right){
    int left = 0;
    while(left < right){
        if(arr[left] != arr[right]){
            cout << "NO";
            return;
        }
        left++;
        right--;
    }
    cout << "YES";
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
    
    isPalindrome(arr,n-1);

    return 0;
}