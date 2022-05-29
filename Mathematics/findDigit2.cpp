//find number of digits in a number 
//recursive approach
#include <bits/stdc++.h>
using namespace std;
int getDigit(long long  n)
{
    if(n<=0) return 0;
    return 1+getDigit(n/=10);
    }

int main(){
    cout<<"Enter the number: \n";
    long long n;
    cin>>n;
    cout<<"The digittd in the number are: "<<getDigit(n);
return 0;
}