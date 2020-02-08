#include<iostream>

using namespace std;


void display(int arr[], size_t size){
  for(int i = 0; i < size; i++){
    cout<<arr[i]<<endl;
  }
}


void insertionSort(int arr[], size_t size){
  int key;
  for(int i = 1; i < size; i++){
    key = arr[i];
    int j = i - 1;
    while(j >= 0 && arr[j] > key){
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

int main(){
  int arr[]{1000,2000,70,800,100};
  size_t size = sizeof(arr)/sizeof(arr[0]);
  insertionSort(arr, size);
  display(arr, size);
  return 0;
}