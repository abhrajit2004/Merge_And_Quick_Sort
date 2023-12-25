#include <iostream>
#include <vector>

using namespace std;

void subseqSum(int arr[], int index, int n, int sum, vector<int>&ans)
{
    if(index==n)
    {
        ans.push_back(sum);
        return;
    }
    subseqSum(arr, index+1, n, sum, ans);
    sum += arr[index];
    subseqSum(arr, index+1, n, sum, ans);
}
int main()
{
    int arr[] = {1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    vector<int> temp;
    subseqSum(arr, 0, size, 0, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    
    return 0;
}