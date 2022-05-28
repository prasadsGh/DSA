//find the number of digits in an number
//Iterative approach
#include <bits/stdc++.h>
using namespace std;
int getDigit(long long  n)
{
    int count=0;
    while(n>0)
    {
        n/=10;
        count++;
    }
    return count;
}
int main(){
    cout<<"Enter the number: \n";
    long long n;
    cin>>n;
    cout<<"Number of digits in number: "<<getDigit(n);
return 0;
}