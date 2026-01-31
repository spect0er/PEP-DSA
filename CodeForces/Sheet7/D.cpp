/* D: Print Digits Using Recursion
Given a number N. Print the digits of N separated by a space.

Note: Solve this problem using recursion.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 10^9).

Output
For each test case print a single line contains the digits of the number separated by space.

*/

#include<iostream>
using namespace std;

void printDigits(int n){
    if(n == 0)return;
    int rem = n % 10;
    n /= 10;
    printDigits(n);
    cout << rem << " ";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        if(n == 0){
            cout << 0;
        }else{
            printDigits(n);  
        }
        
        cout << endl;
    }
    
    return 0;
}