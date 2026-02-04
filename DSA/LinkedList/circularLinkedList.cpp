#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
    
    if(!head){
        head = newNode;
        newNode->next = head;
    }else{
        Node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
    }
}
void insertAtEnd(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        newNode->next = head;
    }else{
        Node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        newNode->next = head;
        temp->next = newNode;
    }
}
void deleteAtHead(Node* &head){
    if(!head){
        cout << "Empty List" << endl;
        return;
    }
    if(head->next == head){
        Node* temp = head;
        delete temp;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    Node* d = head;
    head = head->next;
    temp->next = head;
    delete d;
}
void deleteAtEnd(Node* &head){
    if(!head){
        cout << "Empty List" << endl;
        return;
    }
    if(head->next == head){
        Node* temp = head;
        delete temp;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next->next != head){
        temp = temp->next;
    }
    Node* d = temp->next;
    temp->next = temp->next->next;
    delete d;
}
void deleteInBetween(Node* &head, int pos){
    if(!head){
        cout << "Empty List" << endl;
        return;
    }
    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count < (pos-1) && temp->next != head){
        temp = temp->next;
        count++;
    }
    if(temp->next == head){
        cout << "Position is bigger than the number of nodes in the list" << endl;
        return;
    }
    Node* d = temp->next;
    temp->next = temp->next->next;
    delete d;
}
void printLL(Node* head){
    if(!head){
        cout << "Empty Linked List" << endl;
    }else{
        Node* temp = head;
        while(temp->next != head){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    insertAtEnd(head,20);
    printLL(head);
    insertAtEnd(head,30);
    printLL(head);
    insertAtHead(head,0);
    printLL(head);
    deleteInBetween(head,1);
    printLL(head);
    return 0;
}