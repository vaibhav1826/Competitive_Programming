// standard Sieve of Eratosthenes

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> primecheck(n + 1, -1);

    primecheck[0] = 1;
    primecheck[1] = 1;

    for (int i = 2; i * i <= n; i++)
    {
        if (primecheck[i] == -1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                primecheck[j] = 1;
            }
        }
    }

    for (int i = 0; i < primecheck.size(); i++)
    {
        if (primecheck[i] == -1)
        {
            cout << i << " ";
        }
    }
}

// This sieve implementation is valid up to around 10^7
//  Time: O(n log log n)
//  Space: O(n)
