#include <iostream>
#include <vector>

using namespace std;

bool print(int arr[], int index, int n, int target)
{
    if(target == 0)
    return 1;

    if(index==n || target<0)
    return 0;

    return print(arr, index+1, n, target)||print(arr, index+1, n, target-arr[index]);
}

int main()
{
    int arr[] = {3, 6, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << print(arr, 0, size, 12);
    return 0;
}