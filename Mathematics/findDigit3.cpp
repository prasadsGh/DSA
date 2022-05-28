//this is most efficient way  to count the number of digitd in the number 
#include <bits/stdc++.h>
using namespace std;
int getdigit(long long n)
{
    return (floor(log10(n))+1);
}
int main(){
    cout<<"Enter ther number: ";
    long long n;
    cin>>n;
    cout<<getdigit(n);
return 0;
}