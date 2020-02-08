#include<iostream>

using namespace std;

void bubble (int arr[], int size) {
  for (int i = 0;i < size - 1; i++) {
    bool swap = false;
    for (int j = 0; j+1 < size-i; j++){
      if(arr[j] > arr[j+1]){
        swap = true;
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
    if(!swap){
      break;
    }
  }
  for(int i = 0; i < size; i++){
    cout<<arr[i]<<endl;
  }
}

int main() {
  cout<<"--------------------- Bubble Sort ---------------------"<<endl;
  int arr[]{10,20,70,800,100};
  bubble(arr, 5);
  return 0;
}