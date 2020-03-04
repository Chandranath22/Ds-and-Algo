#include<iostream>
#include<stdlib.h>

using namespace std;

struct Stack
{
  int data;
  struct Stack* next;
};

struct Stack* head = NULL;

void display(){
  if(head == NULL){
    cout<<"No items to display"<<endl;
  }else {
    struct Stack* ptr;
    ptr = head;
    while(ptr != NULL){
      cout<<ptr->data;
      if(ptr->next != NULL){
        cout<<" -> ";
      }
      ptr = ptr->next;
    }  
  }
  cout<<endl;
}

void push (int val) {
  struct Stack* node = new Stack;
  node->data = val;
  node->next = head;
  head = node;
  cout<<"\nValue entered successfully"<<endl;
}

void pop(){
  if(head == NULL){
    cout<<"No items to delete"<<endl;
  }else {
    struct Stack* temp;
    temp = head;
    head = head->next;
    cout<<"Item deleted: "<<temp->data<<endl;
    delete(temp);
    cout<<"Successfull"<<endl;
  }
}

void reverse() {
  struct Stack* current = head;
  struct Stack* prev = NULL;
  struct Stack* nextVal = NULL;

  while(current != NULL){
    nextVal = current->next;
    current->next = prev;

    prev = current;
    current = nextVal;
  }
  head = prev;
  cout<<"Reversed"<<endl;
}

void sort(){
  struct Stack* ptrHead;
  struct Stack* lastPtr = NULL;
  int swapped;
  do{
    swapped = 0;
    ptrHead = head;
    while(ptrHead->next != lastPtr){
      if(ptrHead->data > ptrHead->next->data){
        int temp = ptrHead->data;
        ptrHead->data = ptrHead->next->data;
        ptrHead->next->data = temp;
        swapped = 1;
      }
      ptrHead = ptrHead->next;
    }
    lastPtr = ptrHead;
  }while(swapped);
  cout<<"Sorted"<<endl;
}


int main() {
  cout<<"LinkedList Oprations"<<endl;
  int choice;
  while(true){
    // system("clear");
    cout<<"\n";
    cout<<"1: Insert a value to linked list"<<endl;
    cout<<"2: Delete an item from stack"<<endl;
    cout<<"3: Reverse the linked list"<<endl;
    cout<<"4: Sort linked list"<<endl;
    cout<<"5: Display linked list"<<endl;
    cout<<"6: Exit"<<endl;
    cout<<"\nEnter your choice: ";
    cin>>choice;
    switch(choice){
      case 1: cout<<"\nInsert a value to Stack"<<endl;
      int val;
      cout<<"\nInsert a number: ";
      cin>>val;
      push(val);
      break;

      case 2: cout<<"Delete an item"<<endl;
      pop();
      break;

      case 3: cout<<"\nReverse the linked list"<<endl;
      reverse();
      break;

      case 4: cout<<"\nSort the linked list"<<endl;
      sort();
      break;

      case 5: cout<<"\nDisplay items in the linked list"<<endl;
      display();
      break;

      case 6: exit(0);
      break;

      default: cout<<"Invalid choice"<<endl;
      break;
    }
  }
  return 0;
}