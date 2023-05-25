#include <bits/stdc++.h>
using namespace std;
void bfs(int vertex, queue<int> &q, vector<vector<int>> &graph, vector<int> &visited)
{

    while (!q.empty())
    {
        int temp = q.front();
        cout << temp << " ";
     

        q.pop();
        for (int i = 0; i < graph[temp].size(); i++)
        {
            if (visited[graph[temp][i]] == 0)
            {
                q.push(graph[temp][i]);
                visited[graph[temp][i]]=1;
            }
        }
    }
}
int main()
{
    cout << "enter the no of vertices\n";
    int n;
    cin >> n;
    cout << "enter the number of edges\n";
    int e;
    cin >> e;
    vector<vector<int>> graph(n + 5);
    cout << "enter your edges\n";
    while (e--)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    queue<int> q;
    vector<int> visited(n + 5, 0);
    q.push(1);
    visited[1]=1;
    bfs(1, q, graph, visited);
    return 0;
}