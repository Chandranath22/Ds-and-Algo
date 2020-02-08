#include<iostream>

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
      cout<<ptr->data<<" ";
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


int main() {
  cout<<"LinkedList Oprations"<<endl;
  int choice;
  while(true){
    cout<<"\n";
    cout<<"1: Insert a value to linked list"<<endl;
    cout<<"2: Delete an item from stack"<<endl;
    cout<<"3: Display linked list"<<endl;
    cout<<"4: Exit"<<endl;
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

      case 3: cout<<"\nDisplay items in the linked list"<<endl;
      display();
      break;

      case 4: exit(0);
      break;

      default: cout<<"Invalid choice"<<endl;
      break;
    }
  }
  return 0;
}