// problem statement:
// print all the prime numbers smaller than or equal to given number
// algo is like that create a boolean array from 2 to n and mark all element as false
// then mark all the multiples of 2,3,5 as false exclusing 2,3,5
// efficient approach

#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n == 2 or n == 3)
        return true;
    if (n % 2 == 0)
        return false;
    if (n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if ((n % i == 0) or (n % (i + 2) == 0))
        {
            return false;
        }
    }
    return true;
}
void sieve(int n)
{
    vector<bool> print(n + 1, false);
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime(i))
        {
            for (int j = 2 * i; j <= n; j += i) // multiple of i
            {
                print[i] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    sieve(n);

    return 0;
}