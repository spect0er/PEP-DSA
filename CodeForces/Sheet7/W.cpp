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
#include <bits/stdc++.h>
using namespace std;

bool reachValue(long long n) {
    if (n == 1) return true;
    if (n < 1) return false;

    if (n % 10 == 0 && reachValue(n / 10))
        return true;
    if (n % 20 == 0 && reachValue(n / 20))
        return true;

    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        if(reachValue(n)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
