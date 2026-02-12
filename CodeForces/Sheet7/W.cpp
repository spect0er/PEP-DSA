/*  W. Reach Value
time limit per test1 second
memory limit per test256 megabytes
Given a number N
. Initially you have a value equal 1 and you can perform one of the following operation any number of times:

Multiply your current value by 10.
Multiply your current value by 20.
Determine if your value can reach N
 or not.

Note: Solve this problem using recursion.

Input
First line contains a number T
 (1≤T≤100)
 number of test cases.

Next T
 lines will contain a number N
 (1≤N≤1012)
.

Output
For each test case print "YES" if your value can reach exactly N
 otherwise, print "NO".
*/
#include<bits/stdc++.h>
using namespace std;

void reachValue(int n, int b){
    if(b == n){
        cout << "YES" << endl;
        return;
    }
    if(b > n){
        cout << "NO" << endl;
        return;
    }
    reachValue(n,b*10);
    reachValue(n,b*20);
    
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        reachValue(n,1);
    }

    return 0;
}