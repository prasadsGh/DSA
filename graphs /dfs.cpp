#include <bits/stdc++.h>
using namespace std;
int visited[9]={0};
    
vector<int>graph[6];
void dfs(int vertex)
{
    if(visited[vertex]==0) 
   {
    visited[vertex]=1;
    cout<<vertex<<" ";
   }
    
        //  cout<<visited[i]<<" ";
        for(int child:graph[vertex])
        {
            if(visited[child]) continue;
            dfs(child);

        }  
}
int main()
{

    int n=8,e=5;
    for(int i=1;i<6;i++)
    {
        int x,y; cin>>x>>y;
        graph[x].push_back(y);
    }
    for(int i=1;i<9;i++)
    {
        dfs(i);
    }
    cout<<endl;

    

}