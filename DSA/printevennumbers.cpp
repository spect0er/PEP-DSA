#include<iostream>
using namespace std;
void printEvenNum(int n){
    if(n < 0) return;
    printEvenNum(n-1);
    if(n%2 == 0){
        cout << n << " ";
    }
}
int main(){
    printEvenNum(10);
}