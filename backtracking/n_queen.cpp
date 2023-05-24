#include <bits/stdc++.h>
using namespace std;
const int n=5;
int sol[n][n];
void print()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool issafe(int i, int j)
{
    if(i>=n or j>=n or i<0 or j<0) return false;

    //checking for row leftside
    int temp=i;
    int temp1=j;
    while(j>=0)
    {
        if(sol[i][j]==1)
        {
            return false;
        }
        j--;
    }

   
    
    //checking column for left diagonals 

    i=temp;
    j=temp1;

    while(i>=0 && j>=0)
    {
        if(sol[i][j]==1)
        {
            return false;

        }
        i--;
        j--;
    }
    i=temp;
    j=temp1;

    while(i<n && j>=0)
    {
        if(sol[i][j]==1)
        {
            return false;
        }
        i++;
        j--;
    }
    return true;

}
void queen( int j)
{
    if(j>=n) 
    {
        print();
        cout<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(issafe(i,j))
        {
            sol[i][j]=1;
            queen(j+1);
            sol[i][j]=0;
        }
    }

    return;

}
int main()
{
    
    memset(sol,0,sizeof(sol));
    queen(0);
    return 0;
}