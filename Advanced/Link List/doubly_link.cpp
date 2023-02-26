#include<iostream>
using namespace std;
class Node{
  public:
    int data;
    Node* prev;
    Node* next;
  
  Node(int d){
    this->data = d; 
    this->prev = NULL;
    this->next = NULL;
  }
  ~Node(){
    int value =  this->data;
    // Memory Free
    if(this->next != NULL){
      delete next;
      this->next = NULL;
    }
    cout << "Memory is free for node with data: " << value << endl;
  }
};

void printlist(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout <<temp->prev << " " << temp->data << " " << temp->next;
    temp = temp->next;
  }
}

int getLength(Node* head){
  Node* temp = head;
  int len=0;
  while(temp != NULL){
    len++;
    temp = temp->next;
  }
  return len;
}
    
int main(){
  Node* frist = new Node(10);
  Node* second = new Node(2);
  Node* third = new Node(3);
  frist->next = second->prev;
  second->prev = frist->next;
  second->data = 2;
  second->next = third->prev;
  third->data = 3;
  third->next = NULL;
  printlist(frist);
  cout << "\n" <<getLength(frist);
  return 0;
}
