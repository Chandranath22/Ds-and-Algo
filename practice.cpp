#include<iostream>
#include<queue>
#include<deque>
#include<array>
using namespace std;

void dispaly(queue<int> arr){
  while(!arr.empty()){
    cout<<arr.front()<<" ";
    arr.pop();
  }
  cout<<endl;
}

void rotate(queue<int>arr, int d){
  array<int, 10> temp;
  for(int i = 0; i < d; i++){
    temp[i] = arr.front();
    arr.pop();
  }
  for(int i = 0; i < d; i++){
    arr.push(temp[i]);
  }
  dispaly(arr);
}

int main(){
  deque<int> arr{1, 2, 3, 4, 5, 6, 7};
  queue<int> arr1(arr);
  int d = 2;
  rotate(arr1, 3);
  return 0;
}