/*
    * It is the simplest type of linked list in which every node contains some data and a pointer to the next node of the same data type.

    Data -> *next ---> Data -> *next --->

    Time Complexity - O(N)
    Auxillary Space - O(N)

*/
#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next; // To store the address
    
    Node(){
        int data;
        Node* next;
    }
};

// void remove(Node* &this){
//     int value = this->data;
//     // Memory Free
//     if(this->next != NULL){
//         delete next;
//         this->next = NULL;
//     }
//     cout << "Memory is Free for node with data: "<< value << endl;
// }
// To print list
void printlist(Node* n){
    while (n != NULL){ // Unit temp doesn't reach null
        cout << n->data << " " << n->next << "\n";
        n = n->next;
    }
    cout << "\n";
}

// Insert at head
// If you want to insert the data at first position then create a temp node
// temp node->next = head --- assign the next pointer to the head
// head = temp
void InsertAtHead(Node* &head, int data){ // We implmented reference(&) to not make copy of head node and do change with that
    Node* temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}
void InsertAtTail(Node* &third, int data){
    Node* temp = new Node();
    temp->data = data;
    third->next = temp;
}

void InsertAtMiddle(Node* &head, int position, int Data){
    Node* temp = head;
    int a = 1;
    if(position == 1){
        InsertAtHead(head, Data);
        return;
    }
    while(a < position - 1){
        temp = temp->next; // This is the previous temp
        a++;
    }
    // if(temp->next == NULL){
    //     InsertAtTail(head,Data);
    //     return;
    // }
    Node* NewNode = new Node();
    NewNode->data = Data;
    NewNode->next = temp->next; // NewNodes Next == previous temp->next && If you reverse this it will go on loop
    temp->next = NewNode;

}

void deleteitem(Node* &head, int position){
    Node* temp = head;
    // Deleting item
    if(position == 1){
        temp = temp->next;
        delete temp;
    }
    else{
        Node* curr = new Node();

    }
}
int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* t = new Node();
    t = head;
    head->data = 1;
    t->next = second;
    t=t->next;
    second->data = 2;
    t->next = third;
    t=t->next;
    third->data = 3;
    t->next = NULL;
    // second->data = 2;
    // second->next = third;
    // third->data = 3;
    // third->next = NULL;
    printlist(head);

    InsertAtHead(head, 10);
    printlist(head);

    InsertAtTail(third, 20);
    printlist(head);

    // InsertAtMiddle(head, 6, 68);
    // printlist(head);

    // deleteitem(head,1);
    return 0;   
}

