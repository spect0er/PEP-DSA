/*
Stack using linked list
*/
#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node(int val){
      this->data = val;
      this->next = NULL;
  }
};

class MyStack{
    public:
    Node* top;
    MyStack(){
        top = NULL;
    }
    void push(int val){
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }
    void pop(){
        if(!top){
            cout << "Stack Underflow" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    int peek(){
        if(top == NULL){
            cout << "Empty List" << endl;
            return -1;
        }
        return top->data;
    }
    bool isEmpty(){
        if(!top){
            return true;
        }
        return false;
    }
};
int main(){
    MyStack st;
    st.push(1);
    st.push(2);
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    st.pop();
    cout << st.isEmpty();
    
}