/*  G. Pyramid
time limit per test1 second
memory limit per test256 megabytes
Given a number N
. Print a pyramid of height N
.

Note: Solve this problem using recursion.

Input
Only one line containing a number N
 (1≤N≤103)
.

Output
Print the pyramid in N
 lines.

Examples
Input
1
Output
*
Input
2
Output
 *
***
Input
3
Output
  *
 ***
*****
Input
4
Output
   *
  ***
 *****
*******
*/
#include<bits/stdc++.h>
using namespace std;
// we can make it more recursive by doing the work we are doing in loops with the help of recursion.
void printPyramid(int n, int row){
    if(row >= n) return;
    for(int i = 0 ; i < n - row - 1 ; i++){
        cout << " ";
    }
    for(int i = 0 ; i < 2 * row + 1 ; i++){
        cout << "*";
    }
    cout << endl;
    printPyramid(n,row+1);
}

int main(){
    int n;
    cin >> n;
    printPyramid(n,0);
    return 0;
}