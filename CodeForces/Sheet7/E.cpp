/*  E: Base Conversion
Given a number N. Print the binary equivalent of N.

Note: Solve this problem using recursion.

Input
First line contains a number T (1 ≤ T ≤ 104) number of test cases.

Next T lines will contain a number N (1 ≤ N ≤ 109).

Output
For each test case print a single line contains the answer according to the required above.

Example
Input: 
2
10
3
Output: 
1010
11
*/
#include<bits/stdc++.h>
using namespace std;

    void binaryConversion(int n){
        if(n == 0) return;
        int rem = n % 2;
        n /= 2;
        binaryConversion(n);
        cout << rem;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        binaryConversion(n);
        cout << endl;
    }
    return 0;
}