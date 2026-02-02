/*  O. Fibonacci
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print the value of the Nth Fibonacci number.


Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 30).

Output
Print the value of the Nth Fibonacci number.

Example
Input
5
Output
3
*/
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}