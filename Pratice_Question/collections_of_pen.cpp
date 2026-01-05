#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sieve(int n)
    {
        vector<int> prime;
        vector<int> check(n + 1, -1);

        check[0] = 1;
        check[1] = 1;

        for (int i = 2; i * i <= n; i++)
        {
            if (check[i] == -1)
            {
                for (int j = i * i; j <= n; j += i)
                {
                    check[j] = 1;
                }
            }
        }

        for (int i = 0; i <= n; i++)
        {
            if (check[i] == -1)
            {
                prime.push_back(i);
            }
        }

        return prime;
    }
    int minThirdPiles(int A, int B)
    {
        int left = 0;
        int right = 10000;
        vector<int> primecheck(right - left + 1, -1);
        int num = floor(sqrt(right));
        vector<int> prime = sieve(num);

        for (int i = 0; i < prime.size(); i++)
        {
            int p = prime[i];
            int start = max(p * p, ((left + p - 1) / p) * p);
            for (int j = start; j <= right; j += p)
            {
                primecheck[j - left] = 1;
            }
        }
        if (left == 1)
        {
            primecheck[0] = 1;
        }
        int value;
        for (int i = 2; i < primecheck.size(); i++)
        {
            if (primecheck[i] == -1)
            {
                if ((A + B) < i + left)
                {
                    value = i + left;
                    break;
                }
            }
        }
        return value - (A + B);
    }
};
