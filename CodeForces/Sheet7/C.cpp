/* C: Print N to 1
Given a number N. Print all numbers from N to 1 separated by a single space.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print from N to 1 separated by a single space.

*/

#include<iostream>
using namespace std;

void printNum(int n){
    if(n <= 0) return;
    else if(n == 1) cout << n;
    else cout << n << " ";
    printNum(n - 1);
}

int main(){
    int n;
    cin >> n;
    printNum(n);
    return 0;
}