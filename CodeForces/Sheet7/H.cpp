/*  H. Inverted Pyramid
time limit per test1 second
memory limit per test256 megabytes
Given a number N
. Print an inverted pyramid of height N
.

Note: Solve this problem using recursion.

Input
Only one line containing a number N
 (1≤N≤103)
.

Output
Print the pyramid in N
 lines.

Don't print any extra space after '*'.

Examples
Input
1
Output
*
Input
2
Output
***
 *
Input
3
Output
*****
 ***
  *
Input
4
Output
*******
 *****
  ***
   *



*/

#include<bits/stdc++.h>
using namespace std;
void printChar(int count, char c){
    if(count <= 0) return;
    cout << c;
    printChar(count - 1,c);
}
void printInvertedPyramid(int n, int row){
    if(row >= n) return;
    printInvertedPyramid(n,row+1);
    printChar(n-row-1,' ');
    printChar(2*row + 1,'*');
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    printInvertedPyramid(n,0);
    return 0;
}