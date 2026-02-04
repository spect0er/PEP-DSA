#include<bits/stdc++.h>
using namespace std;
//  
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        this->data = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};
void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
    if(!head){
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insertInBetween(Node* &head, int pos, int val){
    if(pos == 1){
        insertAtHead(head,val);
        return;     
    }
    if(!head){
        cout << "List is Empty." << endl;
        return;
    }
    Node* temp = head;
    Node* newNode = new Node(val);
    int count = 1;
    while(count < (pos - 1) && temp->next != NULL){
        temp = temp->next;
        count++;
    }
    if(count + 1 == pos && temp->next == NULL){
        temp->next = newNode;
        newNode->prev = temp;
        return;
    }
    if(temp->next == NULL){
        cout << "Position is greater than the number of nodes in the list" << endl;
        return;
    }
    temp->next->prev = newNode;
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = newNode;

}
void insertAtEnd(Node* &head, int val){
    Node* newNode = new Node(val);
    if(!head){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void printLinkedList(Node* head){
    if(!head){
        cout << "Empty list." << endl;
        return;
    }
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    Node* head = NULL;
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);
    insertAtEnd(head,40);
    printLinkedList(head);
    insertInBetween(head,4,25);
    printLinkedList(head);
    return 0;
}