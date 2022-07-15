//computing power of power(x,n)-->x to the power of n
//naive approach
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n=14,x=5;
    int temp=x;
    for(int i=0;i<n;i++)
    {
        x*=temp;
    }
    cout<<x<<endl;

return 0;
}