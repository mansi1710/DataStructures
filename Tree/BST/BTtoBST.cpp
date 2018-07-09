#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Minimum number of swaps to convert a binary tree to BST
// Inorder traversal of a BSt is an array sorted in increasing order
// hence, ans is the minimum number of swaps required to sort the array obtained after inorder traversal of the binary tree.
// Time complexity: O(nlogn)

int minSwaps(vector <int> arr, int n)
{
    pair<int, int> arrPos[n];
    for(int i=0;i<n; i++)
    {
        arrPos[i].first= arr[i];
        arrPos[i].second= i;
    }
    sort(arrPos, arrPos+n);
    vector <bool> visit(n, false); int ans=0;
    for(int i=0; i<n; i++)
    {
        if(visit[i] or arrPos[i].second== i) continue;
        int num=0;
        int j=i;
        while(!visit[j])
        {
            visit[j]= true;
            j= arrPos[j].second;
            num++;
        }
        ans+= (num-1);
    }
    return ans;
}

int main() {
    int n; cin>>n;
    int arr[n];
    for(int i=0; i< n; i++){
        cin>>arr[i];
    }
    vector <bool> vis(n, false);
    vector <int> a;
    for(int i=0; i<n; i+=2) {
        int j = i;
        while (2 * j + 1 < n && vis[j]== false) {
            j = 2 * j + 1;
        }
        j= (j-1)/2; //cout<<j;
        if(!vis[2*j+1]) {a.push_back(arr[2*j+1]); vis[2*j+1]= true;}
        if(!vis[j]){a.push_back(arr[j]); vis[j]=true;}
        if(!vis[2*j+2]){a.push_back(arr[2*j+2]); vis[2*j+2]= true;}
        if(a.size()== n/2) a.push_back(arr[0]);
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<minSwaps(a, n);
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}