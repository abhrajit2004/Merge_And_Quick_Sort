#include<iostream>

using namespace std;

int partition(int arr[], int start, int end){
    int pos = start;
    for (int i = start; i <= end; i++)
    {
        if(arr[i]<=arr[end]){
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos-1;
    
}
void quickSort(int arr[],int start, int end){
    if(start>=end)
      return;
    
    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot-1);
    quickSort(arr, pivot+1, end);
}

int main(){
    int arr[] = {6, 2, 5, 1, 4, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, size-1);
    for (int i = 0; i < size; i++)
    {
       cout << arr[i] << " ";
    }
    
    return 0;
}