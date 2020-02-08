#include<iostream>

using namespace std;

void display(int arr[], size_t size){
  for(int i = 0; i < size; i++){
    cout<<arr[i]<<endl;
  }
}

int partition(int arr[], int low, int high){
  int pivot = arr[high];
  int i = (low - 1);

  for(int j = low; j <= high; j++){
    if(arr[j] < pivot){
      i++;
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  int temp = arr[i + 1];
  arr[i + 1] = arr[high];
  arr[high] = temp;

  return (i+1);
}

void quickSort(int arr[], int low, int high){
  if(low < high){
    int pi = partition(arr, low, high);

    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

int main(){
  int arr[]{1000,2000,70,800,100};
  size_t size = sizeof(arr)/sizeof(arr[0]);
  quickSort(arr, 0, size - 1);
  display(arr, size);
  return 0;
}


