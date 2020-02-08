#include<iostream>

using namespace std;

struct Queue
{
  int data;
  struct Queue* next;
};

struct Queue* front = NULL;
struct Queue* rear = NULL;

void display(){
  if(front == NULL){
    cout<<"\nNo items to diplay"<<endl;
  }else {
    struct Queue* ptr;
    ptr = front;
    while(ptr != NULL){
      cout<<ptr->data<<" ";
      ptr = ptr->next;
    }
  }
}

void insert(int val){
  struct Queue* node = new Queue;
  node->data = val;
  if(front == NULL && rear == NULL){    
    front = node;
    rear = node;
    cout<<"Item inserted successfully"<<endl;
  }else {
    rear->next = node;
    rear = node;
    cout<<"Item inserted successfully"<<endl;
  }
}

void del(){
  struct Queue* temp;
  if(front == NULL && rear == NULL){
    cout<<"\nNo items to delete"<<endl;
  }else if(front->next == rear->next) {
    temp = front;
    front = NULL;
    rear = NULL;
    cout<<"Item deleted: "<< temp->data << endl;
    delete(temp);
    cout<<"Successfull"<< endl;
  }else {
    temp = front;
    front = front->next;
    cout<<"Item deleted: "<< temp->data << endl;
    delete(temp);
    cout<<"Successfull"<< endl;
  }
}

int main() {
  cout<<"LinkedList Oprations"<<endl;
  int choice;
  while(true){
    cout<<"\n";
    cout<<"1: Insert a value to Queue"<<endl;
    cout<<"2: Delete an item from stack"<<endl;
    cout<<"3: Display Queue"<<endl;
    cout<<"4: Exit"<<endl;
    cout<<"\nEnter your choice: ";
    cin>>choice;
    switch(choice){
      case 1: cout<<"\nInsert a value to Queue"<<endl;
      int val;
      cout<<"\nInsert a number: ";
      cin>>val;
      insert(val);
      break;

      case 2: cout<<"Delete an item"<<endl;
      del();
      break;

      case 3: cout<<"\nDisplay items in the Queue"<<endl;
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
