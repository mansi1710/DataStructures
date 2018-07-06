#include <bits/stdc++.h>

using namespace std;

// Complete the longestIncreasingSubsequence function below.
// O(n^2) solution
// 
int longestIncreasingSubsequence(vector<int> arr) {
    int i=0, j=0;
    int l[arr.size()];
    for(i=0; i<arr.size(); i++) l[i]= 1;
    for(i=0; i<arr.size(); i++) cout<<l[i]<<" "; cout<<endl;
    i=0;
    for(j=1; j<arr.size(); j++)
    {
        i=0;
        while(i<j)
        {
            if(arr[i]<arr[j])
            {
                l[j]= max(l[j], l[i]+1);
            }
            i++;
        }
    }
    sort(l, l+arr.size());
    return l[arr.size()-1];
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        arr[i] = arr_item;
    }
    int result = longestIncreasingSubsequence(arr);
    cout<<endl;
    cout<<result;

    return 0;
}
