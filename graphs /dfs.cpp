#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> graph[], int n, int vertex, vector<int> &visited)
{
    

        cout << vertex << " ";
        visited[vertex] = 1;
    for (auto child : graph[vertex])
    {

        if (visited[child] == 0)
        {
            dfs(graph, n, child, visited);
        }
    }
    return;
}
int main()
{
    cout << "enter the number of vertices ";
    cout << endl;
    int n;
    cin >> n;
    cout << "enter the number of edges\n";
    cout << endl;
    int e;
    cin >> e;
    cout << "enter the edges\n";
    vector<int> graph[n + 5];
    while (e--)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    vector<int> visited(n + 5, 0);
    dfs(graph, n, 1, visited);

    return 0;
}