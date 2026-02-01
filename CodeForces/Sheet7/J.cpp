/*  J. Factorial
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print factorial of N.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 20).

Output
Print the factorial of the number N.

Example
Input
5
Output
120

*/

#include<bits/stdc++.h>
using namespace std;

long long factorial(long long n){
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}

int main(){
    long long n;
    cin >> n;
    cout << factorial(n);
    return 0;
}