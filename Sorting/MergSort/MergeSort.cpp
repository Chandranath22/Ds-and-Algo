#include<iostream>

using namespace std;

void display(int arr[], size_t size){
  for(int i = 0; i < size; i++){
    cout<<arr[i]<<endl;
  }
}

void merge(int arr[], int left, int middle, int right){
  int i, j, k;
  int sizeLeft = (middle - left) + 1;
  int sizeRight = right - middle;
  
  //Temp array
  int leftArr[sizeLeft], rightArr[sizeRight];

  //Storing elements
  for(i = 0; i < sizeLeft; i++){
    leftArr[i] = arr[left + i];
  }

  for(i = 0; i < sizeRight; i++){
    rightArr[i] = arr[middle + 1 + i];
  }

  //initial index of each array
  i = 0; 
  j = 0;
  k = left;

  //merging all the subarray
  while(i < sizeLeft && j < sizeRight){
    if(leftArr[i] < rightArr[j]){
      arr[k] = leftArr[i];
      i++;
    } else {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }

  //merging the rest subarray elements
  while(i < sizeLeft){
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  while(j < sizeRight){
    arr[k] = rightArr[i];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int start_index, int end_index){
  int middle;
  if(start_index < end_index){
    middle = start_index + (end_index - start_index) / 2;

    mergeSort(arr, start_index, middle);
    mergeSort(arr, middle + 1, end_index);

    merge(arr, start_index, middle, end_index);
  }
}

int main(){
  int arr[]{11, 2, 7, 8, 5, 3};
  size_t size = sizeof(arr)/sizeof(arr[0]);
  mergeSort(arr, 0, size - 1);
  display(arr, size);
  return 0;
}