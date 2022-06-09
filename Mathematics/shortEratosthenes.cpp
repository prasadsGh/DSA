// shorter implmentation of sieve of Eratosthenes
// problem statement:
// print all the prime numbers smaller than or equal to given number
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
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j += i)
            {
                print[i] = false;
            }
        }
    }
}
int main()
{
    int n;
    cout << "Enter the number: \n";
    cin >> n;
    sieve(n);
    return 0;
}