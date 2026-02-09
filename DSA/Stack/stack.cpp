#include<iostream>
using namespace std;
class MyStack{
    public:
    int *arr;
    int top;
    int size;
    MyStack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int val){
        if(top == (size - 1)){
            cout << "Stack Overflow" << endl;
            return;
        } 
        arr[++top] = val;
    }
    void pop(){
        if(top == -1){
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    int peak(){
        if(top == -1){
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }
    
};
int main(){
    MyStack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << st.isEmpty() << endl;
    st.push(6);
    cout << st.peak() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.peak() << endl;
    return 0;
}