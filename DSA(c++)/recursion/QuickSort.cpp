#include<iostream>
#include<vector>
using namespace std;    

int partition(vector<int> &arr, int st, int end) {  //0(n)
    int pivot = arr[end];
    int idx = st - 1;

    for(int j=st ; j<end ; j++) {
        if(arr[j] <= pivot) {
            
            idx++;
            swap(arr[idx], arr[j]);
        }
    }
      idx++;
      swap(arr[idx], arr[end]);
      return idx;
}

void quickSort(vector<int> &arr, int st, int end) {
    if(st < end) {
        int pivotIdx = partition(arr, st, end);  //pivot index

        quickSort(arr, st, pivotIdx - 1);   //left half
        quickSort(arr, pivotIdx + 1, end); //right half
    }
}

int main() {
    vector<int> arr = {12,31,35,8,32,17};
      quickSort(arr, 0, arr.size() - 1);

      for(int val : arr) {
          cout << val << " ";
      }
      cout << endl;
      return 0;
}