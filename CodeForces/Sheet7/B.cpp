/*  B: Print 1 to N
Given a number N. Print numbers from 1 to N in separate lines.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 10^3).

Output
Print N lines according to the required above.

*/

#include<iostream>
using namespace std;

void printNum(int n){
    if(n == 0) return;
    printNum(n - 1);
    cout << n << endl;
}

int main(){
    int n;
    cin >> n;
    printNum(n);
    return 0;
}