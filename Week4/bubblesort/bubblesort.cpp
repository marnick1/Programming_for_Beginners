#include <iostream>
using namespace std;

void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

void bubblesort(int arr[], int size, bool ascending){
  for (int j = 0; j < size-1; ++j){
    for (int i = 0; i < size-1; ++i){
      if (ascending && (arr[i] > arr[i+1])){
        swap(arr[i],arr[i+1]);
      } else if (!ascending && (arr[i] < arr[i+1])){
        swap(arr[i],arr[i+1]);
      }
    }
  }
}

int main() {
  // Initializing array
  const int size = 12;
  int arr[size] = {4,8,12,7,1,23,3,53,23,14,55,135};
  // Array before sorting
  for (int i = 0; i<size; ++i){
    cout << arr[i] << " ";
  }
  cout << endl;
  // Array after sorting in ascending order
  bubblesort(arr, size, true);
  for (int i = 0; i<size; ++i){
    cout << arr[i] << " ";
  }
  cout << endl;
  // Array after sorting in descending order
  bubblesort(arr, size, false);
  for (int i = 0; i<size; ++i){
    cout << arr[i] << " ";
  }
}