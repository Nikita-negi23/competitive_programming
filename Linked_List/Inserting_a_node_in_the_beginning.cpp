//INSERTING A NODE IN THE BEGINNING OF THE HEAD;
#include <iostream>
using namespace std;

//Creating a node;
  class Node {
    public:
    int data;
    Node* next;

    Node()
    {
      this->data = 0;
      this->next = NULL;
    }
    Node(int data)
    {
      this->data = data;
      this->next = NULL;
    }
  };

//I want to insesrt a node right at head of the linked list;
  void insertAtHead(Node* &head,int data)
  {
    //step 1 :
    Node* newNode = new Node(data);
    //step 2 :
    newNode-> next = head;
    //step 3 :
    head = newNode;
}

void print(Node* head)
{
  Node* temp = head;
  while(temp != NULL)
  {
    cout<<temp->data<<" ";
    temp = temp-> next;
  }
}

int main() {
  Node* head = new Node(10);
  insertAtHead(head,20);
  insertAtHead(head,50);
  insertAtHead(head,60);
  insertAtHead(head,90);

  print(head);
  
  return 0;
}