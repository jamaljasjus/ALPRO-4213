#include <iostream>
using namespace std;


void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    while (key > array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

void selectionSort(int arr[], int size)
{   int temp;
for(int i=0; i < size; i++){
for(int j=i+1; j < size; j++){
if(arr[i] < arr[j]){
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
}


int main() {
  int data[] = {2,4,5,1,3};
  int x;
  int size = sizeof(data) / sizeof(data[0]);

  cout << "ketik 1 untuk insertion 2 untuk selection sort ";
  cin >> x;

  if (x=1){
    insertionSort(data, size);}
  else {
    selectionSort(data, size);
  }
  cout << "descending order:\n";
  printArray(data, size);
}
