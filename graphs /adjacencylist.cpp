#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number of nodes: ";
    int n; cin>>n;
    cout<<"Enter the number of edges: ";
    int e; cin>>e;
    vector<int> graph[n];
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        //for undirected graph 
        graph[y].push_back(x);
    }
    return 0;
}