#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sieve(int n)
    {
        vector<int> check(n + 1, -1);
        vector<int> arr;
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

        for (int i = 2; i < check.size(); i++)
        {
            if (check[i] == -1)
            {
                arr.push_back(i);
            }
        }
        return arr;
    }
    int nthTerm(int n)
    {
        int left = 1;
        int right = 100000;
        vector<int> PrimeNumber(right - left + 1, -1);
        int num = floor(sqrt(right));
        vector<int> prime = sieve(num);

        for (int i = 0; i < prime.size(); i++)
        {
            int p = prime[i];
            int start = max(p * p, ((p + left - 1) / p) * p);
            for (int j = start; j <= right; j += p)
            {
                PrimeNumber[j - left] = 1;
            }
        }
        if (left == 1)
        {
            PrimeNumber[0] = 1;
        }

        vector<int> arr;
        for (int i = 0; i < PrimeNumber.size(); i++)
        {
            if (PrimeNumber[i] == -1)
            {
                arr.push_back(i + left);
            }
        }
        return (arr[n - 1] * n) + n;
    }
};
