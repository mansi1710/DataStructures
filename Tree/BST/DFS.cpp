#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct node{
    int data;
    node* left; node* right;
};

void dfs(vector <int> list[], int node, int arrival)
{
        cout<<node<<endl;
        for (int i=0; i<list[node].size(); i++)
        {
            if(list[node][i]!= arrival)
                dfs(list, list[node][i], arrival);
        }
}

int main() {
    int x,y, nodes, edges;
    cin>>nodes>>edges;
    vector <int> list[10000];
    for(int i=0; i<edges; i++)
    {
        cin>>x>>y;
        list[x].push_back(y);
        //list[y].push_back(x);
    }
    dfs(list,1, 0);
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}