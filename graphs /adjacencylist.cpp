#include <bits/stdc++.h>
using namespace std;
int main()
{

    cout<<"Enter the number of nodes: ";
    int n; cin>>n;
    cout<<"Enter the number of edges: ";
    int e; cin>>e;
    vector<int> graph[n];
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
    }
    
}