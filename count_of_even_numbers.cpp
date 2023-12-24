#include <iostream>

using namespace std;

int countEvenNumbers(int arr[], int index)
{
  if (index == -1)
    return 0;
  if (arr[index] % 2 == 0)
    return 1 + countEvenNumbers(arr, index - 1);
  else
    return countEvenNumbers(arr, index - 1);
}

int main()
{
  int arr[] = {1, 3, 4, 6, 5, 8, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << countEvenNumbers(arr, n - 1);
  return 0;
}