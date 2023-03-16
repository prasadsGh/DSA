#include<iostream>
using namespace std;
bool check(string s)
{
    int n = s.size();
    int balance = 0;
    for (auto c: s)
    {
        if (c==')') balance--; else balance++;
        if (balance<0) return false;
    }
    if (balance!=0) return false;
    return true;
}
int main()
{
    string s; cin>>s;
    if(check(s)) cout<<"YES\n";
    else cout<<"NO\n";
}
