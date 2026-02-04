#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data = val;
        this->next = nullptr;
    }
};
void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
    if(!head){
        head = newNode;
        return;
    }else{
        newNode->next = head;
        head = newNode;
    }
}
void insertInBetween(Node* &head,int position,int val){
    Node* newNode = new Node(val);

    if(position == 1){
        newNode->next = head;
        head = newNode;
        return;    
    }
    else if(!head){
        cout << "Empty List";
    }
    else{
        int count = 1;
        Node* newNode = new Node(val);
        Node* temp = head;
        while(count < (position - 1) && temp->next != NULL){
            temp = temp->next;
            count++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        
    }
}
void insertAtEnd(Node* &head, int val){
    Node *newNode = new Node(val);
    if(!head){
        head = newNode;
        return;
    }else{
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void deleteLastNode(Node* &head){
    if(!head){
        cout << "Empty List" << endl;
        return;
    }
    Node* temp = head;
    if(temp->next == NULL){
        delete temp;
        head = NULL;
        return;
    }
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    Node* d = temp->next;
    temp->next = NULL;
    delete d;
}
void deleteNode(Node* head){
    if(head == NULL)return;
    Node* temp = head;
    head = head->next;
    delete temp;
}
void deleteNodeInBetween(Node* &head,int position){
    if(!head){
        cout << "Empty List";
        return;
    }
    if(position == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    int count = 1;
    Node* temp = head;
    while(count < (position - 1) && temp->next != NULL){
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL){
        cout << "Position is out of Linked List." << endl;
        return;
    }
    Node* d = temp->next;
    temp->next = temp->next->next;
    delete d;
    
}
void printLinkedList(Node* head){
    if(!head){
        cout << "Empty list" << endl;
        return;
    }
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void printNumOfEvenNodes(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp){
        if(temp->data % 2 == 0){
            count++;
        }
        temp = temp->next;
    }
    cout << "Number of even nodes: " << count << endl;
}
bool searchKey(Node* head, int key){
    if(!head){
        return false;
    }
    if(head->data == key){
        return true;
    }
    return searchKey(head->next,key);
}
int main(){
    Node* head = new Node(10);
    Node* newNode = new Node(20);
    head->next = newNode;

    printLinkedList(head);

    insertAtEnd(head,33);
    insertAtHead(head,0);

    cout << "List before inserting in between: ";

    printLinkedList(head);

    insertInBetween(head,2,12);
    
    printLinkedList(head);
    
    deleteNodeInBetween(head,6);
    
    printLinkedList(head);
    
    printNumOfEvenNodes(head);
    
    cout << searchKey(head, 10) << endl;
    
    printLinkedList(head);
    
    return 0;
}