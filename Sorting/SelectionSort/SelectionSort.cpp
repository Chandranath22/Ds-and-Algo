#include<iostream>
 
using namespace std;

void display(int arr[], size_t size){
  for(int i = 0; i < size; i++){
    cout<<arr[i]<<endl;
  }
}

void selectionSort(int arr[], size_t size){
  int min = INT32_MAX;
  int smallest_index = 0;
  for(int i = 0; i < size; i++){
    min = INT32_MAX;
    for(int j = i; j < size; j++){
      if(min > arr[j]){
        min = arr[j];
        smallest_index = j;
      }
    }    
    int temp = arr[i];
    arr[i] = arr[smallest_index];
    arr[smallest_index] = temp;
  }
}

int main(){
  int arr[]{1000,2000,70,800,100};
  size_t size = sizeof(arr)/sizeof(arr[0]);
  selectionSort(arr, size);
  display(arr, size);
  return 0;
}
