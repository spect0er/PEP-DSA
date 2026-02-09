// Queue
#include<iostream>
using namespace std;
class MyQueue{
    public:
    int* arr;
    int front;
    int rear;
    int size;
    
    MyQueue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void enque(int val){
        if(rear == (size - 1)){
            cout << "Queue Overflow" << endl;
            return;
        }
        if(front == -1){
            front = 0;
        }
        rear++;
        arr[rear] = val;
    }
    void deque(int val){
        if(front == -1 || front > rear){
            cout << "Queue Underflow" << endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front == -1 || front > rear){
            cout << "Empty Queue" << endl;
            return -1;
        }
        return arr[front];
    }
    bool isEmpty(){
        if(front == -1 || front > rear){
            return true;
        }
        return false;
    }
};

int main(){
    
    
    return 0;
}