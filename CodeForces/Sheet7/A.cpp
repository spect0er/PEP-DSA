/*Given a number N
. Print "I love Recursion" N
 times.

Note: Solve this problem using recursion.

Input
Only one line containing a number N
 (1≤N≤100)
 .

Output
Print "I love Recursion" N
 times.
*/
#include<iostream>
using namespace std;
void printRecursion(int n){
    if(n == 0) return;
    printRecursion(n - 1);
    cout << "I love Recursion" << endl;
}

int main(){
    int n;
    cin >> n;
    printRecursion(n);
    return 0;
}