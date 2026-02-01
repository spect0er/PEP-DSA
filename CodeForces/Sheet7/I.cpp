/*  I. Count Vowels
time limit per test1 second
memory limit per test256 megabytes
Given a string S. Print number of vowels in the string.

Note:

Vowel letters: ['a', 'e', 'i', 'o', 'u'].
Vowel letters could be capital or small.
Solve this problem using recursion.
Input
Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the length of the string and it consists only of capital ,small letters and spaces.

Output
Print number of vowels in string S.

Example
Input
Data Structure Lab
Output
6
*/
#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    if(c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u'){
        return true;
    }
    return false;
}
int countVowels(string s, int end){
    if(end < 0) return 0;
    if(isVowel(s[end])){
        return 1 + countVowels(s,end - 1);
    }else{
        return 0 + countVowels(s,end - 1);
    }
}

int main(){
    string s;
    getline(cin,s);

    cout << countVowels(s,s.size() - 1);
    return 0;
}