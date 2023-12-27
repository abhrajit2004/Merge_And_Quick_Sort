#include <iostream>
#include <vector>

using namespace std;

int perfectSum(int arr[], int index, int n, int target)
{
   if(index==n)
      return target==0;

    return perfectSum(arr, index+1, n, target) + perfectSum(arr, index+1, n, target-arr[index]);
}

int main()
{
    int arr[] = {1, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << perfectSum(arr, 0, size, 1);
    return 0;
}