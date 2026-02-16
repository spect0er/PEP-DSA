/*  Y. Number of Ways
time limit per test1 second
memory limit per test256 megabytes
Given two numbers S
 and E
 where S
 denotes a start point and E
 denotes an end point. Determine how many possible ways to reach point E
 if you can move either 1 step, 2 steps or 3 steps at a time.

Note: Solve this problem using recursion.

Input
Only one line contains two numbers S
 and E
 (1≤S≤E≤15)
.

Output
Print the answer required above.

Example
InputCopy
2 5
OutputCopy
4
*/
#include<bits/stdc++.h>
using namespace std;

int numberOfWays(int k){
    if(k < 0) return 0;
    if(k == 0) return 1;
   
    return numberOfWays(k - 1) + numberOfWays(k - 2) + numberOfWays(k - 3);
}

int main(){
    int l,r;
    cin >> l >> r;
    cout << numberOfWays(r-l);

    return 0;
}