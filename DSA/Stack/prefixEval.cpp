#include<bits/stdc++.h>
using namespace std;

int prefixEval(string s){
    //  create stack
    // traverse from right to left
    // ifs[i] is operand -> push in the stack
    // else if it is an operator -> create two variables to store top two elements, pop them and evaluate with operator
    // push the result back in stack
    // return the last remaining element from the stack->it is the answer
    stack<int> st;
    int i = s.size() - 1;
    while(i >= 0){
        if(s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/'){
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            if(s[i] == '*'){
                st.push(op1*op2);
            }else if(s[i] == '+'){
                st.push(op1+op2);
            }else if(s[i] == '-'){
                st.push(op1-op2);
            }else{
                st.push(op1/op2);
            }
        }else{
            st.push(stoi(s[i]));
        }
        i--;
    }
    return st.top();
}
int postfixEval(string s){
    stack<int> st;
    int i = 0;
    while(i < s.size()){
        if(s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/'){
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            if(s[i] == '*'){
                st.push(op1*op2);
            }else if(s[i] == '+'){
                st.push(op1+op2);
            }else if(s[i] == '-'){
                st.push(op1-op2);
            }else{
                st.push(op1/op2);
            }
        }else{
            st.push(stoi(s[i]));
        }
        i++;
    }
    return st.top();
}
int main(){


    return 0;
}