#include <bits/stdc++.h>
using namespace std;
const int n = 5;
int sol[n][n];
void print(int mat[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
bool issafe(int i, int j, int mat[n][n])
{
    return (i < n && j < n && mat[i][j] == 1);
}
bool SRM(int i, int j, int mat[n][n])
{
    if (i == n - 1 && j == n - 1)
    {
        sol[i][j]=1;
        return true;
    }
    if(issafe(i,j,mat))
    {
        sol[i][j]=1;
        if(SRM(i+1,j,mat))
        {
            return true;
        }
        else if(SRM(i,j+1,mat))
        {
            return true;
        }
        sol[i][j]=0;

    }
    return false;
}
int main()
{
    int mat[5][5];
    memset(sol, 0, sizeof(sol));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    if (SRM(0, 0, mat))
    {
        cout << "Yes\n";
        print(sol);
    }
    else
        cout << "No\n";
}