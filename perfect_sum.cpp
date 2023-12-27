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
    int arr[] = {2, 5, 6, 1, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << perfectSum(arr, 0, size, 8);
    return 0;
}