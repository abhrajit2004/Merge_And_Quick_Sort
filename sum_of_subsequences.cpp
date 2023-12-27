#include <iostream>
#include <vector>

using namespace std;

void subseqSum(int arr[], int index, int n, int sum, vector<int>&ans, vector<vector<int>>&subsets, vector<int>&temp)
{
    if(index==n)
    {
        ans.push_back(sum);
        subsets.push_back(temp);
        return;
    }
    subseqSum(arr, index+1, n, sum, ans, subsets, temp);
    temp.push_back(arr[index]);
    sum += arr[index];
    subseqSum(arr, index+1, n, sum, ans, subsets, temp);
    temp.pop_back();
}

int main()
{
    int arr[] = {3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    vector<vector<int>>subsets;
    vector<int>temp;
    subseqSum(arr, 0, size, 0, ans, subsets, temp);
    for (int i= 0; i < ans.size(); i++)
    {
        cout << ans[i] << "--->";
        for (int j = 0; j < subsets[i].size(); j++)
        {
            cout << subsets[i][j] << " ";
        }
        cout << endl;
    }   
    return 0;
}