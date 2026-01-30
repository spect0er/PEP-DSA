// Problem Statement: Given a staircase of N steps and you can either climb 1 or 2 steps at a given time. The task is to return
//  the count of distinct ways to climb the top one.

// Input: N = 3
// Output: 3

// Ways: [1,1,1],[1,2],[2,1]

#include<iostream>
using namespace std;
int countSteps(int steps, int &count){
    if (steps == 0){
        count++;
    }
    else if(steps == 1){
        countSteps(steps - 1, count);
    }else{
        countSteps(steps - 2, count);
        countSteps(steps - 1, count);
    }
    return count;

}
int main(){
    int steps, count = 0;
    cout << "Enter number of steps: " << endl;
    cin >> steps; 
    count  = countSteps(steps,count);
    cout << count ;
}